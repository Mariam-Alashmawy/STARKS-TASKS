#include <stdio.h>
#include <stdlib.h>

int Perfect(int number);
int main()
{
    printf("Perfect numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i++)
        {
        if (Perfect(i))
            printf("%d\n", i);
        }
    return 0;
}
int Perfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++)
        {
        if (number % i == 0) {
            sum += i;
        }
        }
    return sum == number;
}
