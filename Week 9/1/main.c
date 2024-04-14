#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void insertNode(struct node** head, int value)
{
    struct node* New = malloc(sizeof(struct node));
    New->data = value;
    New->next = NULL;
    if (*head == NULL)
        {
        *head = New;
        }
    else
    {
        struct node* temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = New;
    }
}
void getMiddle(struct node* head,int length)
{
    if(head == NULL || length <= 0)
    {
        printf("invalid linked list");
        return;
    }
    struct node* oneStep = head;
    struct node* twoSteps = head;
    struct node* prev = NULL;
    while(twoSteps != NULL && twoSteps->next != NULL)
    {
        prev = oneStep;
        oneStep = oneStep->next;
        twoSteps = twoSteps->next->next;
    }
    if(length %2 == 0)
    {
        printf("Middle Element 1 = %d\n",prev->data);
        printf("Middle Element 2 = %d\n",oneStep->data);
    }
    else
    {
       printf("Middle Element = %d\n",oneStep->data);
    }
}

int main()
{
    while(1)
    {
        int length;
        printf("Enter the Length of the List: ");
        scanf("%d",&length);
        struct node* head = NULL;
        if (length <= 0)
            {
            printf("Invalid list length\n");
            continue;
            }
        for(int i=1;i<=length;i++)
        {
            int value;
            printf("\nEnter %dth element: ",i);
            scanf("%d",&value);
            insertNode(&head,value);
        }
        getMiddle(head,length);
    }
    return 0;
}
