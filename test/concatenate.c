#include <stdio.h>
#include <string.h>
// Program to concatenate two strings

int main()
{
    int len1,len2,i;
    char s1[30] = "Rachel";
    char s2[9] = "Oyondi";
//  By using strcat
    // strcat(s1,s2);
    // printf("%s\n ", s1);

// By using strncat
    // strncat(s1,s2,3);
    // printf("%s\n ", s1);

    // without strcat
    len1 = strlen(s1);
    len2 = strlen(s2);
    
    for (i = 0; i <= len2; i++)
    {
        s1[len1+i] = s2[i];
    }
    printf("%s\n", s1);
}