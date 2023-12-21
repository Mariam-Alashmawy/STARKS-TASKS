#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum, min, max;
    while(1){
        printf("Enter two numbers: \n");
        scanf("%d %d",&num1, &num2);
        if(num1<=0||num2<=0){
            return 0;
        }
        if(num1>=num2){
           max=num1;
           min=num2;
        }
        else{
           max=num2;
           min=num1;
        }
        for(int i=min;i<=max;i++){
            printf("%d ",i);
            sum += i;
        }
        printf("sum= %d\n", sum);
        sum = 0;
    }
    return 0;
}
