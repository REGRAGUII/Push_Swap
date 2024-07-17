/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:23:54 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/30 00:48:32 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_list **a, int flag)
{
	t_list	*first_node;
	t_list	*last_node;

	if (!*a || !(*a)->next)
		return ;
	first_node = *a;
	*a = first_node->next;
	first_node->next = NULL;
	last_node = *a;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = first_node;
	if (flag)
		write(1, "ra\n", 3);
}

void	rotate_b(t_list **b, int flag)
{
	t_list	*first_node;
	t_list	*last_node;

	if (!*b || !(*b)->next)
		return ;
	first_node = *b;
	*b = first_node->next;
	first_node->next = NULL;
	last_node = *b;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = first_node;
	if (flag)
		write(1, "rb\n", 3);
}

void	rotate_rr(t_list **a, t_list **b)
{
	rotate_a(a, 0);
	rotate_b(b, 0);
	write(1, "rr\n", 3);
}
