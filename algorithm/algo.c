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
    sort_array(a, size);
	algo(a, b, size);
}


static void	indexing(t_list **a, int *array, int size)
{
	t_list	*ls;
	int 	i;
	
	ls = *a;
	while(ls)
	{
		i = 0;
		while(i < size)
		{
			if(ls->content == array[i])
			{
				ls->index = i;
				break;
			}
			i++;
		}
		ls = ls->next;
	}
}
static void	bubble_sort(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while(i < size - 1)
	{
		j = i + 1;
		while(j < size - i - 1)
		{
			if(array[j] < array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
static	void sort_array(t_list **a, int size)
{
	int		*array;
	int		i;
	t_list	*temp;
	
	i = 0;
	temp = *a;
	array = malloc(sizeof(int) * size);
	if(!array)
		return;
	while (temp)
	{
		array[i] = temp->content;
		i++;
		temp = temp->next;
	}
	bubble_sort(array, size);
	indexing(a, array, size);
	free(array);
}


static	void algo(t_list **a, t_list **b, int size)
{
	int renge;
	int size;

    range = ft_range(size);
	while (*a)
    {
		size = lst_size(*b);
        if (index < size)
        {
        	push_b(*a, *b);
    		rotate_b(*b, 1);
		}
		else if (index <= size + range)
			push_b(*a, *b);
		else
			rotate_a(*a, 1);
}

int