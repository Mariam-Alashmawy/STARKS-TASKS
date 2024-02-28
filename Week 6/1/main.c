#include <stdio.h>
#include <stdlib.h>
struct employee
    {
     float salary;
     float bonus;
     float deductions;
    };
int main()
{
    struct employee emp[3];
    float total_value;
    for(int i = 1;i <= 3; i++)
    {
        printf("Enter the salary of employee %d: ",i);
        scanf("%f",&emp[i-1].salary);
        printf("Enter the bonus of employee %d: ",i);
        scanf("%f",&emp[i-1].bonus);
        printf("Enter the deductions of employee %d: ",i);
        scanf("%f",&emp[i-1].deductions);
    }
    for(int i = 0;i < 3;i++)
    {
        total_value += emp[i].salary + emp[i].bonus - emp[i].deductions;
    }
    printf("Total value = %f",total_value);
    return 0;
}
