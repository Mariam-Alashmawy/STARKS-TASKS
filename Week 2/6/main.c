#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int years=0;
    printf("Enter Limak and Bob weigh respectively: \n");
    scanf("%d %d", &a, &b);
    while(a<=b){
        a *=3;
        b *=2;
        years += 1;
    }
    printf("%d",years);
    return 0;
}
