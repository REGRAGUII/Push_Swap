/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:59:02 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/24 23:50:31 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"


void	build_stack(t_list **a, char *str)
{
    int 	i;
    long	num;
	
	i = 0;
	printf("%s\n", str);
	num = ft_atoi(str);
	printf("%d", num);
	lstadd_back(a, new_node(num));
}


int	check_double(t_list *a)
{
	t_list	*temp;

	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if(a->content == temp->content)
				return (0);
			temp = temp->next;
		}
		a = a->next;
	}
	return (1);
}
// int		int_border(char *str)
// {
// 	int	num;
	
// 	num = ft_atoi(str);
// 	if(num > INT_MAX || num < INT_MIN)
// 		return (0);
// 	return (1);
// }

	// -2147483648