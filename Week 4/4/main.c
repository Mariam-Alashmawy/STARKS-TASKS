#include <stdio.h>
#include <stdlib.h>n

int main()
{
    int arr[10];
    int i;
    int sum= 0;
    int product = 1;
    printf("Enter ten elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2 == 0)
            sum += arr[i];
        else
            product *= arr[i];
    }
    printf("Sum of even numbers: %d\n", sum);
    printf("Product of odd numbers: %d\n", product);
    return 0;
}
