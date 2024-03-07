#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int total_price = 0;
void menu(void)
{
    int items, choice;
    int arr[7];
    printf("The Menu\n");
    printf("Quick Snacks:\n 1-Molto  1$ \n 2-Biscuits  1$ \n 3-Pate  2$\n");
    printf("Cold Drinks:\n 4-Cola  2$ \n 5-Miranda  2$\n");
    printf("Hot Drinks:\n 6-Coffee 3$ \n 7-Tee  1$\n");
    printf("Enter how many items do you want:");
    scanf("%d", &items);
    for(int i=0;i<items;i++)
    {
        printf("Item %d:\nEnter its number from the menu:",i+1);
        scanf("%d", &arr[i]);
        switch(arr[i]){
        case 1:
        case 2:
            total_price +=1;
            break;
        case 3:
        case 4:
        case 5:
            total_price +=2;
            break;
        case 6:
            total_price +=3;
            printf("Would you like to add a flavor? (1-Yes, 0-No): ");
            int choice;
            scanf("%d", &choice);
            if(choice == 1)
            total_price += 1;
            break;
        case 7:
            total_price +=1;
            printf("Would you like to add a flavor? (1-Yes, 0-No): ");
            scanf("%d", &choice);
            if(choice == 1)
            total_price += 1;
            break;
        default:
            printf("Invalid item number\n");
            break;
        }
    }
    printf("The total price is: %d$\n", total_price);
}

int check_func(void)
{
    char sub_name[] = "Esraa", name[30];
    int sub_pass = 2222, pass;
    printf("Enter Your User Name:");
    scanf("%s", name);
    printf("Enter Your Password:");
    scanf("%d", &pass);
    int y = strcmp(name, sub_name);
    if(pass == sub_pass && y == 0)
        printf("You Are Logged In!\n");
    else
    {
     printf("Wrong Data!\n");
     return 0;
    }
}

void edit(int permission)
{
    int num, molto, biscuits, pate, cola, miranda, tea, coffee;
    printf("choose the number next to the item to edit");
    printf("1 molto, 2 biscuits, 3 pate, 4 cola, 5 miranda, 6 coffee, 7 tea");
    scanf("%d", &num);
    switch(num){
    case 1:
        printf("enter the quantity of molto ");
        scanf("%d",&molto);
        break;
    case 2:
        printf("enter the quantity of biscuits");
        scanf("%d",&biscuits);
        break;
    case 3:
        printf("enter the quantity of baked pate ");
        scanf("%d",&pate);
        break;
    case 4:
        printf("enter the quantity of cola ");
        scanf("%d",&cola);
        break;
    case 5:
        printf("enter the quantity of miranda ");
        scanf("%d",&miranda);
        break;
    case 6:
        printf("enter the quantity of tea ");
        scanf("%d",&coffee);
        break;
    case 7:
        printf("enter the quantity of coffee ");
        scanf("%d",&tea);
        break;
    }
    printf("Quantity Edited");
}

void payment(int check)
{
    int balance = 10;
    if(check == 1)
    {
        if(total_price <= balance)
        {
             balance -= total_price;
             printf("Payment successful \nRemaining balance: %d$\n", balance);
        }
        else
            printf("Your balance is not enough \n you will have to pay cash");
    }
    else
        printf("\nPay %d$ on the casher",total_price);
}
