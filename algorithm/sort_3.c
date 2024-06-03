/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:56:57 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/31 23:33:22 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int get_min(t_list *a)
{
    int min;

	min = a->content;
    while(a->next)
    {
        a = a->next;
        if (min > a->content)
        	min = a->content;
    }
    return (min);
}

int	get_min_index(t_list *a, int i)
{
	int	index;

	index = 0;
	while(a->content && a->content != i)
	{
		a = a->next;
		index++;
	}
	return (index);
}

void    sort_3(t_list **a, t_list **b, int size)
{
    int min;
    
	min = get_min_index(*a, get_min(*a));
    if (min == 1)
    {
        if ((*a)->content > (*a)->next->next->content)
		{
			rrotate_a(a, 1);
			rrotate_a(a, 1);
		}
		else
			swap_a(*a, 1);
    }
    else if (min == 2)
    {
		if ((*a)->content > (*a)->next->content)
		{
			swap_a(*a, 1);
			rrotate_a(a, 1);
		}
		else
			rrotate_a(a, 1);
    }
	else
	{
		swap_a(*a, 1);
		rotate_a(a, 1);
	}
}

void	sort_5()