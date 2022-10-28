#include <stdio.h>

/**
 * main - derefencing pointers, example with int and char types
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;
   int *p;
   char c;
   char *pp;

   c = 'H';
   pp = &c;
   n = 98;
   p = &n;
   printf("Value of 'c': %d ('%c')\n", c, c);
   printf("Address of 'c': %p\n", &c);
   printf("Value of 'pp': %p\n", pp);
   printf("Value of 'n': %d\n", n);
   printf("Address of 'n': %p\n", &n);
   printf("Value of 'p': %p\n", p);
   *p = 402;
   *pp = 'o';
   printf("Value of 'n': %d\n", n);
   printf("Value of '*pp': %d\n", *pp);
   printf("Value of 'c': %d ('%c')\n", c, c);
   printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
   return (0);
}
// Value of 'c': 72 ('H')
// Address of 'c': 0x7ffe57e9cc7b
// Value of 'pp': 0x7ffe57e9cc7b
// Value of 'n': 98
// Address of 'n': 0x7ffe57e9cc7c
// Value of 'p': 0x7ffe57e9cc7c
// Value of 'n': 402
// Value of '*pp': 111
// Value of 'c': 111 ('o')
// Value of '*pp': 111 ('o')