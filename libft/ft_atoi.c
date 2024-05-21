/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:39:00 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/21 19:47:22 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sg;
	int	rs;
	

	sg = 1;
	rs = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		sg = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			rs = rs * 10 + *nptr - '0';
		else
			break ;
		nptr++;
	}
	if((size_t)rs > INT_MAX || (ssize_t)rs < INT_MIN)
		return(0);
	return (sg * rs);
}
