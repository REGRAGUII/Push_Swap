/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:45:55 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/23 23:40:17 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_list *new_node (int cont)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if(!node)
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

        i++;
    }
    return 1;
}

void	build_stack(t_list **a, char *str)
{
    int i;
    size_t num;
	
    i = 0;
    num = ft_atoi(str);
	lstadd_back(a, new_node(num));
}

void print_list(t_list *lst) {
    printf("List contents: ");
    while (lst) 
	{
        printf("%d ", lst->content);
        lst = lst->next;
    }
    printf("\n");
}

int	ft_parse(t_list **a, char **av, int size)
{
	int		i;
	int		j;
	char	**str;
	int c;

	j = 0;
    i = 0;
	while (j <= size)
	{
		str = ft_split(av[j], ' ');
		if(!str)
            return (0);
        i = 0;
		while (str[i])
		{
            if(!valid_arg(str[i]))
			{
				free_double(str);
                return (0);
			}
			build_stack(a, str[i]);
            i++;  
        }
		free_double(str);
		j++;
	}
	return (1);
    free_double(str);
}
