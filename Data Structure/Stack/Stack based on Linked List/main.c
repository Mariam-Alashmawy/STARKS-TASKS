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
    int size;
}Stack;

// Function to create an empty stack
void CreateStack(Stack *ps) {
    ps->top = NULL;
    ps->size = 0;
}

// Function to push an element onto the stack
void push(StackEntry e, Stack *ps) {
    StackNode *pn = (StackNode*)malloc(sizeof(StackNode));
    pn->entry = e;
    pn->next = ps->top;
    ps->top = pn;
    ps->size++;
}

// Function to pop an element from the stack
void pop(StackEntry *pe, Stack *ps) {
    StackNode *temp;
    *pe = ps->top->entry;
    temp = ps->top;
    ps->top = ps->top->next;
    free(temp);
    ps->size--;
}

// Function to check if the stack is full
int StackFull(Stack *ps) {
    return 0;
}

// Function to check if the stack is empty
int StackEmpty(Stack *ps) {
    return ps->top == NULL;
}

//Function to clear the stack
void ClearStack(Stack *ps) {
StackNode *pn = ps->top;
StackNode *qn = ps->top;
while(pn){
  pn = pn->next;
  free(qn);
  qn = pn;
}
ps->top = NULL;
ps->size = 0;
}

// Function to traverse the elements of the stack
void TraverseStack(Stack *ps, void(*pf)(StackEntry)) {
StackNode *pn = ps->top;
while(pn) {
  (*pf)(pn->entry);
  pn = pn->next;
}
}

//Function to check the size of the stack
int StackSize(Stack *ps) {
int x;
StackNode *pn = ps->top;
for(x=0;pn;pn=pn->next) {
  x++;
}
return x;
}
// Display function
void Display(StackEntry e)
{
    printf(e is: %d\n,e);
}

//User level
int main()
{
   StackEntry e;
   Stack s;
   CreateStack(&s);
   Push(e, &s);
   pop(&e, &s);
   ClearStack(&s);
   TraverseStack(&s, &Display);
   X = StackSize(&s);
}
