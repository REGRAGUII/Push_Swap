/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 00:18:02 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/30 17:06:12 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_list *a, int flag)
{
	int	temp;

	if (!a || !a->next)
		return ;
	temp = a->content;
	a->content = a->next->content;
	a->next->content = temp;
	if (flag)
		write(1, "sa\n", 3);
}

void	swap_b(t_list *b, int flag)
{
	int	temp;

	if (!b || !b->next)
		return ;
	temp = b->content;
	b->content = b->next->content;
	b->next->content = temp;
	if (flag)
		write(1, "sb\n", 3);
}

void	swap_ab(t_list *a, t_list *b)
{
	swap_a(a, 0);
	swap_b(b, 0);
	write(1, "ss\n", 3);
}
