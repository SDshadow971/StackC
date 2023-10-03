#ifndef __StackC__
#define __StackC__

typedef struct StackElement 
{
    int value;
    StackElement *next;

}StackElement, *Stack;

Stack createStack();

#endif