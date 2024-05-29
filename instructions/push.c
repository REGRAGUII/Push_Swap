/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:28:15 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/29 17:58:46 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty

#include "../includes/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*temp;
	
	if (!*b)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	write(1, "pa\n", 3);
}
void	push_b(t_list **a, t_list **b)
{
	t_list	*temp;
	
	if (!*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	write(1, "pb\n", 3);
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
// 	t_list	*a = NULL;
// 	t_list	*b = NULL;
// 	t_list	*c = new_node(1);
// 	t_list	*d = new_node(2);
// 	t_list	*e = new_node(3);
// 	t_list	*f = new_node(4);

// 	lstadd_back(&a, c);
// 	lstadd_back(&a, d);
// 	lstadd_back(&b, e);
// 	lstadd_back(&b, f);
// 	print_list(a);
// 	print_list(b);
// 	push_b(&a, &b);
// 	print_list(a);
// 	print_list(b);
// }
