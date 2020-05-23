#include "push_swap.h"

void        split_to_b(t_lst **stack_a, t_lst **stack_b)
{
    int     len;
    int     i;
    t_lst   **temp_a;

    temp_a = stack_a;
    while (ls_countlist(*stack_a) > 5)
    {
        index_reset(*stack_a);
        lst_index2(*stack_a);
        len = ls_countlist(*stack_a);
        len = len / 4;
        i = len;
        while (i != 0)
        {
            if ((*temp_a)->pos2 <= len)
            {
                ls_push(stack_b, stack_a);
                ft_putendl("pb");
                i--;
            }
            else
                rot(stack_a);
        }
    }
}