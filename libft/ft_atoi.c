/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:39:00 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/27 21:11:41 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

long	ft_atoi(const char *nptr)
{
	int		sg;
	long	rs;
	int		i;

	i = 0;
	sg = 1;
	rs = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
	{
		i++;
	}
	// printf("fjhdjhdkjfhjk     %c\n", nptr[i]);
	// if(nptr[i] == '\0')
	// {
	// 	write(2,"Error\n",6);
	// 	exit(1);
	// }
	if (nptr[i] == '-')
	{
		sg = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			rs = rs * 10 + nptr[i] - '0';
		if (sg * rs > 2147483647 || sg * rs < -2147483648)
			return (2147483649);
		i++;
	}
	return (sg * rs);
}
