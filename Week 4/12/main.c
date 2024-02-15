#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50];
    int i;
    int minimum,maximum;
    printf("enter 10 elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    minimum = maximum = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    printf("the minimum value is %d \n",minimum);
    printf("the maximum value is %d \n",maximum);
    return 0;
}

