/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:41:25 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/30 17:03:02 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
//
// rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
//
// rrr : rra and rrb at the same time.

#include "../includes/push_swap.h"

void	rrotate_a(t_list **stack, int flag)
{
	t_list	*last;
	t_list	*before_last;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrotate_b(t_list **stack, int flag)
{
	t_list	*last;
	t_list	*before_last;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
	if (flag)
		write(1, "rrb\n", 4);
}
void	rrotate_ab(t_list **stack, t_list **stack0)
{
	rrotate_a(stack, 0);
	rrotate_b(stack0, 0);
	write(1, "rrr\n", 4);
}

// void print_list(t_list *lst) {
//     printf("List contents: ");
//     while (lst)
// 	{
//         printf("content : %d ", lst->content);
//         lst = lst->next;
//     }
//     printf("\n");
// }
// int main()
// {
// 	t_list *a = new_node(5);
// 	t_list *c = new_node(7);
//  	t_list *b = new_node(10);
// 	t_list *d = new_node(11);
// 	//
// 	lstadd_back(&a, b);
// 	lstadd_back(&a, c);
// 	//
// 	lstadd_back(&d, new_node(99));
// 	lstadd_back(&d, new_node(192));

// 	print_list(a);
// 	print_list(d);
// 	rrotate_a(&a, 1);
// 	print_list(a);
// 	rrotate_b(&d, 1);
// 	print_list(d);
// 	rrotate_ab(&a, &d);
// 	print_list(a);
// 	print_list(d);
// }