#include <stdio.h>
#include <stdlib.h>

// Definition of a structure for each node in the stack
typedef struct stacknode {
    StackEntry entry;
    struct stacknode *next;
}StackNode;

// Definition of a structure for the stack
typedef struct stack {
    StackNode *top;
}Stack;

// Function to create an empty stack
void createstack(Stack *ps) {
    ps->top = NULL;
}

// Function to push an element onto the stack
void push(StackEntry e, Stack *ps) {
    StackNode *pn = (StackNode*)malloc(sizeof(StackNode));
    pn->entry = e;
    pn->next = ps->top;
    ps->top = pn;
}

// Function to pop an element from the stack
void pop(StackEntry *pe, Stack *ps) {
    StackNode *temp;
    *pe = ps->top->entry;
    temp = ps->top;
    ps->top = ps->top->next;
    free(temp);
}

// Function to check if the stack is empty
int StackFull(Stack *ps) {
    return 0;
}

// Function to check if the stack is full
int StackEmpty(Stack *ps) {
    return ps->top == NULL;
}





// Function to peek the top element of the stack
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // indicating stack underflow
    }
    return stack->top->data;
}

// Function to display the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


//user lrvel
void main
{
stack s;
StackEntry e;
createstack(&s);
push(e, &s);
pop(&e, &s);
