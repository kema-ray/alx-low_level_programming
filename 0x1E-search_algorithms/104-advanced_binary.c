#include "search_algos.h"

/**
 * recursion_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int recursion_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t n;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (n = 0; n < size; n++)
		printf("%s %d", (n == 0) ? ":" : ",", array[n]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (recursion_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (recursion_search(array, half + 1, value));

	half++;
	return (recursion_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to recursion_search to return
 * the index of the number
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recursion_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
