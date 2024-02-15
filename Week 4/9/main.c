#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char str[MAX], replace;
    int length;
    printf("Input a string: ");
    gets(str);
    printf("Input replace character: ");
    scanf("%c", &replace);
    length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ')
            {
              str[i] = replace;
            }
    }
    printf("Output after replacing the space with %c: %s", replace, str);
    return 0;
}
