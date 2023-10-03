#ifndef __StackC__
#define __StackC__

typedef struct StackElement 
{
    int value;
    struct StackElement *next;

}StackElement, *Stack;

Stack createStack();
Stack addStack(int i, Stack st);
Stack deleteElementStack(Stack st);

#endif