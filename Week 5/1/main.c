#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    char alphabet = 'A';
    for(p = &alphabet;*p <= 'Z';(*p)++)
    {
        printf("%c ",*p);
    }
    return 0;
}
