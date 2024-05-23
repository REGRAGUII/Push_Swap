/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:12:45 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/23 15:52:56 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../libft/libft.h"

typedef struct s_stack
{
	int				num;
	int				position;
	struct s_stack	*next;
	
} t_stack;

void    ft_error(char *message, int fdd);
char	*ft_parse(t_stack **a, char **av, int size);
int		valid_arg(char *str);
// t_stack *ft_listfill(char **str);
void	free_double(char **str);
void	build_stack(t_stack **a, char *str);

#endif