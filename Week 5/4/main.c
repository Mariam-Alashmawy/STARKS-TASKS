#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char *s;
    printf("Input a String: ");
    gets(str);
    s = str;
    int vowels = 0;
    int consonants = 0;
    while(*s != '\0')
    {
       if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
       {
        if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' ||
           *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')
          vowels++;
        else
          consonants++;
       }
       s++;
    }
    printf("Number of vowels = %d \t Number of consonants = %d",vowels,consonants);
    return 0;
}
