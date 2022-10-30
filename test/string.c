#include <stdio.h>

void main()
{
    char name[30];
    printf("Enter you name:");
    // scanf("%s", name);
    fgets(name,sizeof(name),stdin);
    printf("Your name is %s\n", name);
}