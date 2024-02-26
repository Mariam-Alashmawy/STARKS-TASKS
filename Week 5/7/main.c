#include <stdio.h>
#include <stdlib.h>
char *findstring(char *str, char *substr);
int main()
{
    char source_str[100], search_str[100];
    char *result;
    printf("Enter source string: ");
    gets(source_str);
    printf("Enter search string: ");
    gets(search_str);
    result = findstring(source_str, search_str);
    if(result != NULL)
        printf("First occurrence of %s at index: %d",search_str,result-source_str);
    else
        printf("The string is not found.");
    return 0;
}
char *findstring(char *str, char *substr)
{
    char *ptr1 = str;
    char *ptr2 = substr;
    char *start;
    while(*ptr1 != '\0')
    {
        start = ptr1;
        while(*ptr2 != '\0' && *ptr1 == *ptr2)
        {
            ptr1++;
            ptr2++;
        }
        if(*ptr2 == '\0')
            return start;
        else
        {
            ptr2 = substr;
            ptr1 = start + 1;
        }
    }
    return NULL;
}
