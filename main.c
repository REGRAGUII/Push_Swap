/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:14:36 by youssef           #+#    #+#             */
/*   Updated: 2024/06/12 03:14:33 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void print_list(t_list *lst) {
    printf("List contents: ");
    while (lst) 
	{
        printf("content : %d ", lst->content);
        lst = lst->next;
    }
    printf("\n");
}

int main(int ac, char **av)
{
    t_list		*a;
	t_list		*b;
	int			size;

	a = NULL;
	b = NULL;
	size = 0;
	
	if(ac == 1)
		exit(1);
	ft_parse(&a, av +1, ac - 1);
	size = lst_size(a);
	if (size == 3 && !sorted(a))
		sort_3(&a, size);
	else if (size == 4 && !sorted(a))
		sort_4(&a, &b);
	else if (size == 5)
		sort_5(&a, &b);
	// else
	// 	push_swap(&a, &b, size);
	// printf("size of >>%d\n", size);
	print_list(a);
	free_stack(&a);
	free_stack(&b);
	return 0;
}
