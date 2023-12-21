#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    while(3){
        printf("Enter two numbers:\n");
        scanf("%d %d",&x, &y);
        printf("The submission is: %d\n",x+y);
    }
    return 0;
}
