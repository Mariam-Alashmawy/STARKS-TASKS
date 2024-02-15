#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char str1[MAX], str2[MAX];
    int len1 = 0, len2 = 0;
    int i;
    printf("Input the first string: ");
    gets(str1);
    printf("Input the second string: ");
    gets(str2);
    while (str1[len1] != '\0')
        {
            len1++;
        }
    while (str2[len2] != '\0')
        {
            len2++;
        }
    for (i = 0; i <= len2; i++)
    {
        str1[len1 + i] = str2[i];
    }
    printf("After concatenation the string is: %s\n", str1);
    return 0;
}
