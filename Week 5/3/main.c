#include <stdio.h>
#include <stdlib.h>

void calc(float x, float y, float *sum, float *difference, float *product);
int main()
{
    float x, y;
    printf("Enter two numbers:");
    scanf("%f %f",&x, &y);
    float sum, difference, product;
    calc(x, y, &sum, &difference, &product);
    return 0;
}
void calc(float x, float y, float *sum, float *difference, float *product)
{
    *sum = x + y;
    *difference = x - y;
    *product = x * y;
    printf("Sum = %.2f\n",*sum);
    printf("Difference = %.2f\n",*difference);
    printf("Product = %.2f\n",*product);
}
