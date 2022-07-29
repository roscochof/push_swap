/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_push_rrotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:56:03 by amarzana          #+#    #+#             */
/*   Updated: 2022/07/29 10:55:39 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_control *control, char c)
{
	t_list	*aux;

	if (c == 'b')
	{
		write(1, "pb\n", 3);
		aux = control->stack_a;
		control->stack_a = control->stack_a->next;
		ft_lstadd_front(&control->stack_b, aux);
		control->a_size--;
		control->b_size++;
	}
	else if (c == 'a')
	{
		write(1, "pa\n", 3);
		aux = control->stack_b;
		control->stack_b = control->stack_b->next;
		ft_lstadd_front(&control->stack_a, aux);
		control->a_size++;
		control->b_size--;
	}
}

static void	ft_rrotate_job(t_list *stack)
{
	int	i;

	i = ft_lstsize(stack);
	while (--i > 0)
		ft_rotate_job(stack);
}

void	ft_rrotate(t_control *control, char c)
{
	if (c == 'a')
	{
		write(1, "rra\n", 4);
		ft_rrotate_job(control->stack_a);
	}
	else if (c == 'b')
	{
		write(1, "rrb\n", 4);
		ft_rrotate_job(control->stack_b);
	}
	else if (c == 'r')
	{
		write(1, "rrr\n", 4);
		ft_rrotate_job(control->stack_a);
		ft_rrotate_job(control->stack_b);
	}
}
