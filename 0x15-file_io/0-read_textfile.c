#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the
  * POSIX standard output
  * @filename: text file being read
  * @letters: number of letters to be read
  * Return: w- actual number of bytes read and printed
  *         0 when functions fails or filename is NULL
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t s;
	ssize_t w;
	ssize_t t;

	s = open(filename, O_RDONLY);
	if (s == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(s, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(s);
	return (w);
}
