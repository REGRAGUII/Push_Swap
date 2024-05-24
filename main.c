/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:14:36 by youssef           #+#    #+#             */
/*   Updated: 2024/05/24 23:35:36 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void print_list(t_list *lst) {
    printf("List contents: ");
    while (lst) 
	{
        printf("%d ", lst->content);
        lst = lst->next;
    }
    printf("\n");
}
int main(int ac, char **av)
{
    t_list	*a;
	t_list	*b;
	
	a = NULL;
	b = NULL;
	if(ac == 1)
		exit(1);
	ft_parse(&a, av +1, ac - 1);
	if(!check_double(a))
		exit(1);
	print_list(a);
	//check the case of 'num+num or num-num'
	free_stack(&a);
	// free_stack(&b);
	return 0;
}
