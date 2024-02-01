#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "lab1.h"
int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Call %d\n", i + 1);
        float num1, num2;
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        printAverage(num1, num2);
    }
    printf("Number of calls to printAverage function: %d\n", getCallCount());
    return 0;
}
