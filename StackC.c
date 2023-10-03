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
    element = malloc(sizeof(StackElement));
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