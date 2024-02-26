#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Input %d number of element in the array: ",n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nReversed Array: ");
    int *ptr = arr + n - 1;
    for (; ptr >= arr; ptr--)
    {
        printf("%d ", *ptr);
    }
    return 0;
}
