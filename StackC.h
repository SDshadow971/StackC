#ifndef __StackC__
#define __StackC__

typedef struct Stack 
{
    int value;
    struct Stack *next;

}*Stack;

Stack createStack();
Stack addStack(int i, Stack st);
Stack deleteElementStack(Stack st);
Stack emptyStack(Stack st);

typedef struct MetaStack
{
    string descStrack;
    unsigned int lengthStack;
    struct Stack stack;

} MetaStack;

MetaStack createEmptyMetaStack(string desc);
MetaStack createInitMetaStack(string desc, Stack st);

#endif