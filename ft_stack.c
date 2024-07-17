/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:59:02 by yregragu          #+#    #+#             */
/*   Updated: 2024/06/11 23:41:58 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_list	*new_node(int cont)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = cont;
	node->next = NULL;
	return (node);
}

void	lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!temp)
	{
		*lst = new;
		return ;
	}
	while (temp)
	{
		if (temp->next)
			temp = temp->next;
		else
		{
			temp->next = new;
			return ;
		}
	}
}

int	lst_size(t_list *a)
{
	int		x;
	t_list	*tmp;

	tmp = a;
	x = 0;
	while (tmp)
	{
		tmp = tmp->next;
		x++;
	}
	return (x);
}

int	sorted(t_list *a)
{
	if (!a)
		return (1);
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}
