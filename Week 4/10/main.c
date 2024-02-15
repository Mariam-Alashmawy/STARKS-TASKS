#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100];
    int isEqual = 1;
    printf("Input the first string: ");
    gets(str1);
    printf("Input the second string: ");
    gets(str2);
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
        {
            if (str1[i] != str2[i])
            {
                isEqual = 0;
                break;
            }
            i++;
        }
    printf("String1: %s\n", str1);
    printf("String2: %s\n", str2);
    if (isEqual == 1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
