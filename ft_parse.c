/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:45:55 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/30 17:06:49 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	build_stack(t_list **a, char *str)
{
    int 	i;
    long	num;
	
	i = 0;
	num = ft_atoi(str);
	if(num == 2147483648)
		return (0);
	lstadd_back(a, new_node(num));
	return (1);
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
				return(0);
			temp = temp->next;
		}
		a = a->next;
	}
	return (1);
}

int valid_arg(char *str)
{
    int i = 0;

	 
    if (str[i] == '\0')
        return 0;
    while (str[i])
    { 
        if (!ft_isdigit(str[i]) && str[i] != ' ' && str[i] != '+' && str[i] != '-')
            return 0;
        if ((str[i] == '+' || str[i] == '-') && 
            (i > 0 && str[i-1] != ' ' && !ft_isdigit(str[i-1])))
            return 0;
        if ((str[i] == '+' || str[i] == '-') && 
            (str[i+1] == '\0' || !ft_isdigit(str[i+1])))
            return 0;
		if(ft_isdigit(str[i]) && (str[i + 1] == '-' || str[i + 1] == '+')
			&& ft_isdigit(str[i + 2]))
			return(0);
        i++;
    }
    return 1;
}

int	ft_parse(t_list **a, char **av, int size)
{
	int		i;
	int		j;
	char	**str;

    j = -1;
	while (++j <= size)
	{
		if(!(str = ft_split(av[j], ' ')))
            return (0);
        i = -1;
		while (str[++i])
		{
            if(!valid_arg(str[i]) || !build_stack(a, str[i]) || !check_double(*a))
			{
				free_double(str);
				free_stack(a);
                exit(1);
			}
        }
		free_double(str);	
	}
	return (1);
}
