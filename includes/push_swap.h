/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssef <youssef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:12:45 by yregragu          #+#    #+#             */
/*   Updated: 2024/06/20 17:34:15 by youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../libft/libft.h"


typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
} t_list;

// void    ft_error(char *message, int fdd);
int		ft_parse(t_list **a, char **av, int size);
int		valid_arg(char *str);
void	free_double(char **str);
int		int_border(char *str);

//linked list functions
t_list	*new_node(int content);		
void	lstadd_back(t_list **lst, t_list *new);
int		build_stack(t_list **a, char *str);
void	print_list(t_list *lst);
void	free_stack(t_list **a);
int		check_double(t_list *a);
int		lst_size(t_list *a);
int		sorted(t_list *a);

//instruction functions
void    swap_a(t_list *a, int flag);
void	swap_b(t_list *stack, int flag);
void	swap_ab(t_list *a, t_list *b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rotate_a(t_list **a, int flag);
void	rotate_b(t_list **b, int flag);
void	rotate_rr(t_list **a, t_list **b);
void    rrotate_a(t_list **stack, int flag);
void    rrotate_b(t_list **stack, int flag);
void	rrotate_ab(t_list **stack, t_list **stack0);

//algorithm
void    sort_3(t_list **a, int size);
void    sort_4(t_list **a, t_list **b);
void    sort_5(t_list **a, t_list **b);
int		get_index(t_list *a, int i);
int		get_min(t_list *a);


#endif