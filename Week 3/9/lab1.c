#include "lab1.h"
static int callCount = 0;
void printAverage(float num1, float num2)
{
    float average = (num1 + num2) / 2.0;
    printf("Average of %.2f and %.2f is %.2f\n", num1, num2, average);
    callCount++;
}

int getCallCount() {
    return callCount;
}

