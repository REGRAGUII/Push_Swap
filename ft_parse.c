/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:45:55 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/20 17:46:25 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

char	*ft_checker(char **av, int ac)
{
	char 	*join;
	char	*temp;
	int		i;

	i = 1;
	join = NULL;
	temp = NULL;
	while (i <= ac)
	{
		if(!ft_isspace(av[i]) || av[i][0] == NULL)
			return(NULL);
		temp = ft_strjoin(join, av[i]);
		free(join);
		join = temp;
		temp = ft_strjoin(join, " ");
		free(join);
		join = temp;
		i++;
	}
	return (join);
}

int valid_arg(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(!ft_isdigit(str[i]) && str[i] == ' ' && str[i] == '+' && str[i] == "-")
			return(0);
		if(i > 0 && ft_isdigit(str[i]) && (str[i] == '-' || str[i] == '+'))
			return (0);
		i++;
	}
	return (1);
}

t_stack *ft_listfill(char **str)
{
	char *str;

	return();
}

t_stack	*ft_parse(char **av, int ac)
{
    t_stack	*args_list;
	char 	*str_arg;
	int		i;
	
	str_arg = ft_checker(av, ac);
	
	args_list = ft_listfill(str_arg);
	i = 0;
	while (str_arg[i])
	{
		free(str_arg[i]);
		i++;
	}
	free(str_arg);
	return(args_list);
}