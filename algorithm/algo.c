/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssef <youssef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 22:14:06 by yregragu          #+#    #+#             */
/*   Updated: 2024/07/10 20:50:10 by youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	digging(int maximum, t_list **b, int size)
{
	while (maximum)
	{
		if (maximum >= size / 2)
			rrotate_b(b, 1);
		else if (maximum < size / 2)
			rotate_b(b, 1);
		maximum = get_max(*b);
	}
}

static void	indexing(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *a;
	tmp1 = *a;
	while (tmp)
	{
		tmp->index = 1;
		tmp = tmp->next;
	}
	tmp = *a;
	while (tmp)
	{
		while (tmp1)
		{
			if (tmp->content > tmp1->content)
				tmp->index++;
			tmp1 = tmp1->next;
		}
		tmp1 = *a;
		tmp = tmp->next;
	}
}

static void	push_back(t_list **a, t_list **b)
{
	int	maximum;

	indexing(b);
	while (*b)
	{
		maximum = get_max(*b);
		digging(maximum, b, lst_size(*b));
		push_a(a, b);
	}
}

static void	algo(t_list **a, t_list **b)
{
	int	range;
	int	size;

	range = ft_range(*a);
	while (*a)
	{
		size = lst_size(*b);
		if ((*a)->index <= size)
		{
			push_b(a, b);
			rotate_b(b, 1);
		}
		else if ((*a)->index <= size + range)
			push_b(a, b);
		else
			rotate_a(a, 1);
	}
	push_back(a, b);
}

void	push_swap(t_list **a, t_list **b)
{
	indexing(a);
	algo(a, b);
}
