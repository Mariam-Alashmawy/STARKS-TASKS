#include <stdio.h>
#include <stdlib.h>
void factorial(int num, long long *result);
int main()
{
    int n;
    long long fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    factorial(n, &fact);
    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}
void factorial(int num, long long *result) {
    int i;
    if (num == 0 || num == 1) {
        *result = 1;
        return;
    }
    for (i = 2; i <= num; i++) {
        *result *= i;
    }
}
