#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50];
    int i,n;
    int smallest,biggest,smallest_position,biggest_position;
    printf("enter the number of elements in the array:  ");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    smallest = biggest = arr[0];
    smallest_position = biggest_position = 0;
    for(i=1;i<n;i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_position = i;
        }
        if(arr[i] > biggest)
        {
            biggest = arr[i];
            biggest_position = i;
        }
    }
    printf("the smallest number is %d and the smallest position is %d\n",smallest,smallest_position+1);
    printf("the biggest number is %d and the biggest position is %d\n",biggest,biggest_position+1);
    return 0;
}
