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

void    push_swap(t_list **a, t_list **b, int size)
{
    int index;
    int rarnge;

    // range = ft_range(size);

    index = get_index(&a, get_min);
    while (*a)
    {
        if (index < size(b))
        {
        	push_b(*a, *b);
    		rotate_b(*b, 1):
		}
		else if (index <= size(b))
			push_b(*a, *b);
		else
			rotate_a(*a);
	}
}