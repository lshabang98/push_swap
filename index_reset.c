#include "push_swap.h"

void        index_reset(t_lst *stack)
{
    while (stack != NULL)
    {
        stack->pos2 = 0;
        stack = stack->next;
    }
}