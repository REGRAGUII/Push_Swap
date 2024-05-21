/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:14:36 by youssef           #+#    #+#             */
/*   Updated: 2024/05/21 22:24:03 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"



int main(int ac, char **av)
{
    t_stack	*args;

    int i = 0;
	if (ac < 2 || av[i] == NULL)
		exit(1);
	args = ft_parse(av, ac);
	while(args)
	{
		printf("%d", args->num);
		args = args->next;
	}
}
