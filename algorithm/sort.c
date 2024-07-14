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

void    sort_3(t_list **a, int size)
{
    if (get_index(*a, get_min(*a)) == 1)
    {
        if ((*a)->content > (*a)->next->next->content)
		{
			rrotate_a(a, 1);
			rrotate_a(a, 1);
		}
		else
			swap_a(*a, 1);
    }
    else if (get_index(*a, get_min(*a)) == 2)
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

void    sort_4(t_list **a, t_list **b)
{
    int min;
   
   while (!sorted(*a))
   {
    	min = get_index(*a, get_min(*a));
    	if (min <=  2)
    	{
    	    rotate_a(a, 1);
    	    if(!sorted(*a))
				push_a(a, b);
   		}
    	else
   		{
        	rrotate_a(a, 1);
			if(!sorted(*a))
			    push_b(a, b);
   		}
		if(!sorted(*a))
		{
    		sort_3(a, 3);
			push_a(a, b);
		}
	}
}

void    sort_5(t_list **a, t_list **b)
{
    int	min;
    int x;
	int size;


    while (!sorted(*a))
    {
        x = 0;
        min = get_index(*a, get_min(*a));
		size = lst_size(*a);
		while ((min <= size / 2) && x++ < min)
			rotate_a(a, 1);
		while ((min > size / 2) && x++ < size - min)
			rrotate_a(a, 1);
        if(!sorted(*a))
            push_b(a, b); 
    }
	while(*b)
    {
        push_a(a,b);
    }
}

