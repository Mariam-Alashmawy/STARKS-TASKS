#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x=1;
    printf("enter a number:\n");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            printf("%d ",x);
            x++;
        }
        printf(" PUM\n");
        x++;
    }
    return 0;
}
