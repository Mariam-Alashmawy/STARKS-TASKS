#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"

int main()
{
    int mode, permission,check;
    char admin_name[] ="Mariam", entered_name[30];
    int password = 1111, entered_pass;
    printf("Please choose whether you are an admin or a user.\nPress 1 for admin mode or 2 for user mode:");
    scanf("%d", &mode);
    switch(mode){
    case 1:
        logging:
        printf("Enter Your User Name:");
        scanf("%s", entered_name);
        printf("Enter Your Password:");
        scanf("%d", &entered_pass);
        int x = strcmp(entered_name, admin_name);
        if(entered_pass == password && x == 0)
            printf("You Are Logged In!\nPlease Choose Your Operation\n");
        else
        {
            printf("Wrong Data!");
            return 0;
        }
        printf("Press 1 for viewing the menu or 2 for editing its quantities:");
        scanf("%d", &permission);
        if(permission == 1)
            menu();
        else if(permission == 2)
            edit(permission);
        else
        {
            printf("Wrong Value!");
            goto logging;
        }
        break;
    case 2:
        printf("Welcome \nPlease specify if you are a subscriber or a guest \nPress 1 for subscriber or 2 for a guest: ");
        scanf("%d",&check);
        if(check == 1)
        {
            check_func();
            if(check_func() != 0)
            {
                menu();
                payment(check);
            }
        }
        else
        {
            menu();
            payment(check);
        }
        break;
    }
    return 0;
}
