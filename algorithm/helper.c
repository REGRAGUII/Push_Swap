/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:31:45 by yregragu          #+#    #+#             */
/*   Updated: 2024/06/09 18:14:15 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min(t_list *a)
{
	int	min;

	min = a->content;
	while (a->next)
	{
		a = a->next;
		if (min > a->content)
			min = a->content;
	}
	return (min);
}


int	get_max(t_list *a)
{
	int		max;
	int		size;
	t_list	*temp;

	max = 0;
	size = lst_size(a);
	while (a)
	{
		if (a->index == size)
			return (max);
		max++;
		a = a->next;
	}
	return (0);
}

int	get_index(t_list *a, int i)
{
	int	index;

	index = 0;
	while (a->content && a->content != i)
	{
		a = a->next;
		index++;
	}
	return (index);
}
int	ft_range(t_list *a)
{
	int size;

	size = lst_size(a);
    if (size <= 15)
        return(2);
	if (size <= 100)
		return (15);
	else if (size <= 500)
		return(30);
    else
        return (45);
}
