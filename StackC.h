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

// Meta data for a stack
typedef struct MetaStack
{
    char descStrack[50];
    unsigned int lengthStack;
    Stack stack;

} MetaStack;

MetaStack createMetaStack();
MetaStack addMetaStack(int i, MetaStack mt);
MetaStack deleteElementMetaStack(MetaStack mt);
MetaStack emptyMetaStack(MetaStack mt);

#endif