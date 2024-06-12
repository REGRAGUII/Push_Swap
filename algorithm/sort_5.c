/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:49:54 by yregragu          #+#    #+#             */
/*   Updated: 2024/06/12 03:26:25 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_5(t_list **a, t_list **b, int size)
{
    int	min;
    int x;
	
    min = get_min_index(*a, get_min(*a));
    while (!sorted(*a))
    {
        x = 0;
        if (min <= size / 2)
        {
            while (x++ < min)
            {
                rotate_a(a, 1);
            }
        }
        else
        {
            while (x++ < size - min)
            {
                rrotate_a(a, 1);
            }
        }
        size--;
               
        if(!sorted(*a))
            push_b(a, b);
        if (size == 3)
            sort_3(&a, size);
    }
    while((*b)->content != NULL)
    {
        push_a(a,b);
    }
}