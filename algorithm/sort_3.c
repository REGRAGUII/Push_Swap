/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:56:57 by yregragu          #+#    #+#             */
/*   Updated: 2024/06/12 03:01:07 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_3(t_list **a, int size)
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
