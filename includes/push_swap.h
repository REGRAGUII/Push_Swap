/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryuuk_reg <ryuuk_reg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:12:45 by yregragu          #+#    #+#             */
/*   Updated: 2024/05/15 20:11:47 by ryuuk_reg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_stack
{
	int				num;
	int				position;
	struct s_stack	*next;
	
} t_stack;

void    ft_error(char *message, int fdd);
char	**ft_checker(char **av, int ac);
int		ft_atoi(const char *nptr);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
void	ft_putchar_fd(char *c, int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(char *s);



#endif