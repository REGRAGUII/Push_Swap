/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:14:36 by youssef           #+#    #+#             */
/*   Updated: 2024/05/19 13:16:19 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

char	**ft_checker(char **av, int ac)
{
	char	**arg;
	char 	*join;
	char	*temp;
	int		i;

	i = 1;
	join = NULL;
	temp = NULL;
	arg = NULL;
	if (ac < 2 || av[i] == NULL)
		exit(1);
	while (i <= ac)
	{
		temp = ft_strjoin(join, av[i]);
		free(join);
		join = temp;
		temp = ft_strjoin(join, " ");
		free(join);
		join = temp;
		i++;
	}
	arg = ft_split(join, ' ');
	i = 0;
	// while (arg[i])
	// {
	// 	// printf("%s\n", arg[i]);
	// 	free(arg[i]);
	// 	i++;
	// }
	free(arg);
	// free(join);
	return (arg);
}


int main(int ac, char **av)
{
    t_stack	*a;
    t_stack	*b;
    char	**arg;

    int i = 0;
	arg = NULL;
	arg = ft_checker(av, ac);
		while (arg[i])
	{
		printf("%s\n", arg[i]);
		// free(arg[i]);
		i++;
	}
}
