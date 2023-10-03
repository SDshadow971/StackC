#ifndef __StackC__
#define __StackC__

typedef struct Stack 
{
    int value;
    struct Stack next;

}*Stack;

Stack createStack();
Stack addStack(int i, Stack st);
Stack deleteElementStack(Stack st);
Stack emptyStack(Stack st);

#endif