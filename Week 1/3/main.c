#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Enter a character:\n");
    scanf("%c", &character);
    printf("You entered '%c' and its ascii code is %d\n",character,character);
    printf("The previous character is '%c' and the next one is '%c'\n",character-1,character+1);
    return 0;
}
