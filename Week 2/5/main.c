#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, sum;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("Enter a range a and b: \n");
    scanf("%d %d", &a, &b);
    for(int i=1;i<=n;i++){
        if(i/10==0){
            if(i>=a&&i<=b){
                sum +=i;
            }
        }
        else{
            int number=i;
            int digit_sum=0;
            while(number){
                int digit= number%10;
                digit_sum += digit;
                number/=10;
            }
            if(digit_sum>=a&&digit_sum<=b){
                sum+=i;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
