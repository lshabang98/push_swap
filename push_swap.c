/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:15:28 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:58:19 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		launch(t_lst *stack_a, t_lst *stack_b)
{
	int		len;

	len = ls_countlist(stack_a);
	lst_index(stack_a);
	if (len > 20){
		split_to_b(&stack_a, &stack_b);
		index_reset(stack_a);
		lst_index2(stack_a);
		taketotop(&stack_a);
		find_next(&stack_a);
		return_nums(&stack_a, &stack_b, len);
	}
	else
		command(&stack_a, &stack_b);
}

int			main(int argc, char *argv[])
{
	t_lst	*stack_b;
	t_lst	*stack_a;

	stack_b = NULL;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	else if (argc > 2)
		ls_isnum(argc, argv);
	stack_a = ls_stack(argc, argv);
	launch(stack_a, stack_b);
	return (0);
}
