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

static void sorting(t_list **a, t_list **b, int size)
{
	if(size == 2 && !sorted(*a))
		rotate_a(a, 1);
	else if (size == 3 && !sorted(*a))
		sort_3(a, size);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
}
static int	ft_isempty(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(av[j])
		{
			while (av[j][i] == 32 || (av[j][i] >= 9 && av[j][i] <= 13))
			{
				i++;
			}
			if(av[j][i] == 0)
				ft_error();
			while(av[j][i] != '\0')
				i++;	
			i = 0;
			j++;
		}
	return (1);
}
int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (ac == 1)
		exit(1);
	ft_isempty(av);
	if (!ft_parse(&a, av + 1, ac))
		ft_error();
	size = lst_size(a);
	if(size <= 5 )
		sorting(&a, &b, size);
	if (size > 5 && !sorted(a))
		push_swap(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
