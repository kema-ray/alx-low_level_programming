// C program to demonstrate putchar() method
  
#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0
 */
int main()
{
  
    char ch = 'a';
  
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
        putchar('\n');
  
    return (0);
}
