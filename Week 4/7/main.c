#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
    int arr[MAX];
    int freq[MAX] = {0};
    int i,n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }
    printf("Unique elements in the array: ");
    for (i = 0; i < MAX; i++)
        {
            if (freq[i] == 1)
            {
                printf("%d ", i);
            }
        }
    printf("\n");
    return 0;
}
