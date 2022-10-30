#include <stdio.h>
#include <string.h>

int main()
{
    char name[40];
    int count = 0, i = 0;

    printf("Enter your name:");
    fgets(name,sizeof(name),stdin);
    // count = strlen(name);
    // printf("String length is:%d\n", count);
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("String length is:%d\n", count);
}