#include <stdio.h>
#include <stdlib.h>
unsigned long long int fibonacci(unsigned int n);
int main()
{
    unsigned int n;
    printf("Enter the value of n to calculate the nth Fibonacci number: ");
    scanf("%d" ,&n);
    printf("The %u-th Fibonacci number is: %llu\n", n, fibonacci(n));
    //Determining the largest Fibonacci number
    unsigned long long int a = 0, b = 1, next;
    unsigned long long int largest = b;
    while (1)
        {
        next = a + b;
        if (next < b)
            break;
        largest = next;
        a = b;
        b = next;
        }
    printf("The largest Fibonacci number that can be printed on this system is: %llu\n", largest);
    return 0;
}
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    unsigned long long int a = 0, b = 1, temp;
    for (unsigned int i = 2; i <= n; ++i)
        {
        temp = a + b;
        a = b;
        b = temp;
        }
    return a;
}
