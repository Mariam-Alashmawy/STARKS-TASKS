#include <stdio.h>
#include <stdlib.h>

int reverser (int num);
int main()
{
int num, reversed_number;
printf("Enter a number to reverse: \n");
scanf("%d",&num);
reversed_number = reverser(num);
printf("The reversed number is: %d\n",reversed_number);
return 0;
}
