#include "push_swap.h"

void		find_last_first(t_lst **stack_a, t_lst **stack_b, int last)
{
	t_lst	*temp;
	int		i;

	temp = *stack_b;
	i = 0;
	while (temp != NULL)
	{
		if (temp->pos == last)
		{
			if (i < (ls_countlist(*stack_b) / 2))
			{
				while (i != 0)
				{
					ls_rotate(stack_b);
					ft_putendl("rb");
					i--;
				}
			}
			else
			{
				i = ls_countlist(*stack_b) - i;
				while (i != 0)
				{
					ls_rev_rot(stack_b);
					ft_putendl("rrb");
					i--;
				}
			}
			ls_push(stack_a, stack_b);
			ft_putendl("pa");
			return ;
		}
		temp = temp->next;
		i++;
	}
}