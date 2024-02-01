#include <stdio.h>
#include <stdlib.h>

int qualityPoints(int average);
int main()
{
    int average;
    printf("Enter the average:");
    scanf("%d",&average);
    printf("Your GPA is: %d",qualityPoints(average));
}

int qualityPoints(int average)
{
    if (average >= 90 && average <= 100) {
        return 4;
    } else if (average >= 80 && average <= 89) {
        return 3;
    } else if (average >= 70 && average <= 79) {
        return 2;
    } else if (average >= 60 && average <= 69) {
        return 1;
    } else {
        return 0;
    }
}
