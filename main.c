/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryuuk_reg <ryuuk_reg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:14:36 by youssef           #+#    #+#             */
/*   Updated: 2024/05/15 20:55:01 by ryuuk_reg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

char	**ft_checker(char **av, int ac)
{
	char	**arg;
	char 	*join;
	int		i;

	i = 0;
	join = '\0';
	if (ac < 2 || av[i] == NULL)
		exit(1);
	while (i < ac)
	{
		join = ft_strjoin(join, av[i]);
		free(join);
		i++;
	}
	arg = ft_split(join, ' ');
	free(join);
	return (arg);
}


int main(int ac, char **av)
{
    t_stack	*a;
    t_stack	*b;
    char	**arg;

    arg = NULL;
	arg = ft_checker(av, ac);
	printf("%s", *arg);
	
}