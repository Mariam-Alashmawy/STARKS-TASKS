#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, addition, subtraction, multiplication, division;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf("addition: %f\n", addition);
    printf("subtraction: %f\n", subtraction);
    printf("multiplication: %f\n", multiplication);
    printf("division: %f\n", division);

    return 0;
}

