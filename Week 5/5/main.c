#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *sort;
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
    printf("\n");
    sort = arr;
    int t;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(sort + j) < *(sort + i)) {
                t = *(sort + i);
                *(sort + i) = *(sort + j);
                *(sort + j) = t;
            }
        }
    }
    printf("Sorted Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(sort + i));
    }
    return 0;
}
