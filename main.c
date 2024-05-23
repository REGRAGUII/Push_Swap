/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:14:36 by youssef           #+#    #+#             */
/*   Updated: 2024/05/23 23:51:12 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"



int main(int ac, char **av)
{
    t_list	*a;
	t_list *b;
	
	a = NULL;
	b = NULL;
    int i = 1;
	if (ac < 2 || av[i] == NULL)
		exit(1);
	if(!ft_parse(&a, av +1, ac - 1))
		exit(1);
	print_list(a);
	free_stack(a);
	return 0;
}
