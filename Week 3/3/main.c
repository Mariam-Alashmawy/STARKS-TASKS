#include <stdio.h>
#include <stdlib.h>

int DtoB (int num);
int main()
{
    int num,binary;
    printf("enter a decimal number\n");
    scanf("%d", &num);
    printf("binary equavelent is: %d \n",DtoB(num));
    return 0;
}
int DtoB (int num)
{
    int binary;
    int position = 1 << 30;
    while((position&num) ==0 &&position!=0)
    {
        position <<= 1;
    }
    while(position!=0)
    {
        binary = (position & num) ? 1 : 0;
        printf("%d",binary);
        position <<= 1;
    }
    return binary;
}
