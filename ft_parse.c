/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:45:55 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/21 22:26:59 by yregragu         ###   ########.fr       */
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
	while (i < ac)
	{
		if(!ft_isspace(av[i]) || av[i][0] == '\0')
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
		if(!ft_isdigit(str[i]) && str[i] == ' ' && str[i] == '+' && str[i] == '-')
			return(0);
		if(i > 0 && ft_isdigit(str[i]) && (str[i] == '-' || str[i] == '+'))
			return (0);
		i++;
	}
	return (1);
}

t_stack *ft_listfill(char **str)
{
	t_stack	*list;
	int 	i;
	int		j;
	int		num;
	
	i = 0;
	num = 0;
	while (str[i])
	{
		j = 0;
		while(str[i][j])
		{
			num  = ft_atoi(str[i]);
			j++;
		}
		i++;
		ft_lstadd_back(&list, ft_lstnew((void *)(ssize_t)num));
	}
	return(list);
}

t_stack	*ft_parse(char **av, int ac)
{
    t_stack	*args_list;
	char 	*str_arg;
	char	**args;
	int		i;
	
	str_arg = ft_checker(av, ac);
	if(!str_arg)
	{
		free(str_arg);
		return (NULL);
	}
	args = ft_split(str_arg, ' ');
	free(str_arg);
	// funciton that check duplicate numbers 
	args_list = ft_listfill(args);
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	return(args_list);
}