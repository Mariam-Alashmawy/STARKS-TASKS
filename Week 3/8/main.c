#include <stdio.h>
#include <stdlib.h>
float SmallestNumber(float num1, float num2, float num3);
int main()
{
    float num1,num2,num3;
    printf("Enter three numbers to compare:\n");
    scanf("%f %f %f",&num1,&num2,&num3);
    float result = SmallestNumber(num1, num2, num3);
    printf("The smallest number is: %f\n", result);
    return 0;
}
float SmallestNumber(float num1, float num2, float num3)
{
    if (num1 < num2 && num1 < num3)
        return num1;
    else if (num2 < num1 && num2 < num3)
        return num2;
    else
        return num3;
}

