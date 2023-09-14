/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saleshin <saleshin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:00:28 by saleshin          #+#    #+#             */
/*   Updated: 2023/08/14 18:34:19 by saleshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
1. can start with ``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''
2. +/- signs (mines change sign)
3. 0
*/
int	white_space(char a)
{
	return (a == ' ' || a == '\f' || a == '\n' || a == '\r' || a == '\t'
		|| a == '\v');
}

int	plus_minus(const char *a, int *sign)
{
	if ((*(a + 1) == '-' || *(a + 1) == '+') && (*a == '-' || *a == '+'))
		return (1);
	if (*a == '-')
		*sign = -1;
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	digits;

	i = 0;
	while (white_space(str[i]))
	{
		i++;
	}
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (plus_minus(&str[i], &sign))
			return (0);
		i++;
	}
	digits = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		digits = digits * 10;
		digits = digits + str[i] - '0';
		i++;
	}
	digits = sign * digits;
	return (digits);
}
/*
int	main(void)
{
	int		n;
	char	test[100] = "\n\n\r\f-+--+0567123390re000 32";

	n = ft_atoi (test);
	printf("%d\n", n);
	return (0);
}
*/