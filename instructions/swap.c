/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 00:18:02 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/29 18:37:07 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
#include "../includes/push_swap.h"

void    swap_a(t_list *a, int flag)
{
	int	temp;

	if (!a || !a->next)
		return ;
	temp = a->content;
	a->content = a->next->content;
	a->next->content = temp;
	if(flag)
		write(1, "sa\n", 3);
}

void	swap_b(t_list *b, int flag)
{
	int	temp;

	if(!b || !b->next)
		return ;
	temp = b->content;
	b->content = b->next->content;
	b->next->content = temp;
	if(flag)
		write(1, "sb\n", 3);
}
void	swap_ab(t_list *a, t_list *b)
{
	swap_a(a, 0);
	swap_b(b, 0);
	write(1, "ss\n", 3);
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
	
// 	lstadd_back(&a, b);
// 	lstadd_back(&a, c);
	
// 	lstadd_back(&d, new_node(99));
// 	// lstadd_back(&b, c);

// 	print_list(a);
// 	print_list(d);
// 	swap_a(a, 1);
// 	print_list(a);
// 	swap_b(d, 1);
// 	print_list(d);
// 	swap_ab(a, d);
// 	print_list(a);
// 	print_list(d);
		
// }
