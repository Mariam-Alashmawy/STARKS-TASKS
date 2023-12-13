#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,x;
    printf("Enter two floats: \n");
    scanf("%f %f",&num1,&num2);
    printf("Numbers before swapping are: %f, %f\n",num1,num2);
    x=num1;
    num1=num2;
    num2=x;
    printf("Numbers after swapping are: %f, %f",num1,num2);
    return 0;
}
