/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssef <youssef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:14:36 by youssef           #+#    #+#             */
/*   Updated: 2024/06/24 22:34:23 by youssef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void print_list(t_list *lst) {
    printf("List contents: \n");
    while (lst) 
	{
        printf("content : %d | index : %d\n", lst->content, lst->index);
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
		ft_error();
	ft_parse(&a, av +1, ac - 1);
	size = lst_size(a);
	// if (size == 3 && !sorted(a))
	// 	sort_3(&a, size);
	// else if (size == 4)
	// 	sort_4(&a, &b);
	// else if (size == 5)
	// 	sort_5(&a, &b);
	// else if(size > 5 && !sorted(a))
	push_swap(&a, &b);
	print_list(a);
	print_list(b);
	free_stack(&a);
	free_stack(&b);
	return 0;
}
