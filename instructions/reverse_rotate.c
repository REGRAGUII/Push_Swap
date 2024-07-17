/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:41:25 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/30 17:03:02 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrotate_a(t_list **stack, int flag)
{
	t_list	*last;
	t_list	*before_last;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrotate_b(t_list **stack, int flag)
{
	t_list	*last;
	t_list	*before_last;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrotate_ab(t_list **stack, t_list **stack0)
{
	rrotate_a(stack, 0);
	rrotate_b(stack0, 0);
	write(1, "rrr\n", 4);
}
