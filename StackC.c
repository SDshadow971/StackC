#include <stdio.h>
#include <stdlib.h>
#include "StackC.h"

Stack createStack()
{
    return NULL;
}

Stack addStack(int i, Stack st)
{
    Stack element;
    element = malloc(sizeof(Stack));
    element->value = i;
    element->next = st;
    return element;
}

Stack deleteElementStack(Stack st)
{
    if(st != NULL)
    {
        Stack element = st->next;
        free(st);
        return element;
    }
}

Stack emptyStack(Stack st)
{
    if(st != NULL)
    {
        Stack element = st->next;
        free(st);
        emptyStack(element);
    }  
    return NULL;
}


MetaStack createMetaStack()
{
    MetaStack mt;
    mt.lengthStack = 0;
    mt.stack = createStack();
    return mt;
}

MetaStack addMetaStack(int i, MetaStack mt)
{
    mt.lengthStack++;
    mt.stack = addStack(i, mt.stack);
    return mt;
}

MetaStack deleteElementMetaStack(MetaStack mt)
{
    if(mt.stack != NULL && mt.lengthStack > 0)
    {
        mt.lengthStack--;
        mt.stack = deleteElementStack(mt.stack);
    }
}

MetaStack emptyMetaStack(MetaStack mt)
{
    if(mt.stack != NULL && mt.lengthStack > 0)
    {
        mt.lengthStack = 0;
        mt.stack = emptyStack(mt.stack);
    }
}