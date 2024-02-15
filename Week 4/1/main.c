#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[10] = {0};
    int reminder,n;
    printf("enter a number: \n");
    scanf("%d",&n);
    while(n>0)
    {
        reminder = n%10;
        if(arr1[reminder]==1)
            break;
        arr1[reminder]=1;
        n = n/10;
    }
    if(n>0)
        printf("yes");
    else
        printf("no");
    return 0;
}
