#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    char ch;
    int count = 0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character to find its frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }
    printf("The frequency of '%c' in the string is %d.\n", ch, count);
    return 0;
}
