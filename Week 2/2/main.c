#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id = 1, password = 2;
    int entered_id, entered_password;
    int i = 1;
    printf("Enter your ID:\n");
    scanf("%d", &entered_id);
    if(id==entered_id){
        printf("Enter Your Password (You have three trails): \n");
        scanf("%d", &entered_password);
        while(i<=3){
            i++;
            if(entered_password==password){
                printf("welcome\n");
                break;
            }
            else if(i<=3&&entered_password!=password){
                printf("incorrect password, enter again:\n");
                scanf("%d", &entered_password);
            }

        }
    }
    else{
        printf("You are not registered\n");
    }
    if(i==4&&entered_password!=password){
                printf("No more tries, you entered the password wrong three times\n");
            }
    return 0;
}
