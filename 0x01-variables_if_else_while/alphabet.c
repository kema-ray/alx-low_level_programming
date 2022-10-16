
// C program to demonstrate putchar() method
  
#include <stdio.h>
  
int main()
{
  
    // Get the character to be written
    char ch = 'a';
  
    // Write the Character to stdout
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
        putchar('\n');
  
    return (0);
}