#include <stdio.h>
#include <stdlib.h>

//implementation of the stack based on array
//1- stack type definition
struct stack{
int top;
StackEntry entry[MAXSTACK];
}Stack;
//2- create stack function
void CreateStack(Stack *ps)
{
    ps->top = 0;
}
//3- push function
void Push(StackEntery e, Stack *ps)
{
    ps=>entry[ps->top++] = e;
}
//4- StackFULL function
int StackFULL(Stack *ps)
{
    if(ps->top == MAXSTACK)
        return 1;
    else
        return 0;
}
//5- pop function
void pop(StackEntry *ps, Stack *ps)
{
    ps->top--;
    *pe = ps->entry[ps->top];
}
//6- StackEMPTY function
int StackEMPTY{Stack *ps}
{
    if(ps->top == 0)
        return 1;
    else
        return 0;
}
//7- StackTop function
void pop(StackEntry *ps, Stack *ps)
{
    *pe = ps->entry[ps->top-1];
}
//8- StackSize function
int StackSize(Stack *ps)
{
    return ps->top;
}
//9- ClearStack function
void ClearStack(Stack *ps)
{
    ps->top=0;
}
//10- TraverseStack function
void TraverseStack(Stack *ps,void(*pf)(StackEntry))
{
    for(int i=ps->top;i>0;i--)
    {
        (*pf)(ps->entry[i-1]);
    }
}

//Display function
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
   if(!StackFULL(&s))
    Push(e, &s);
   if(!StackEMPTY(&s))
    pop(&e, &s);
   if(!StackEMPTY(&s))
    StackTop(&e, &s);
   X = StackSize(&s);
   ClearStack(&s);
   TraverseStack(&s, &Display);

}
