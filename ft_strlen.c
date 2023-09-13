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
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/
size_t	ft_strlen(const char *str)
{
	unsigned int	res;

	res = 0;
	while (*str != '\0')
	{
		str++;
		res++;
	}
	return (res);
}
/*
int	main(int argi, char **argv)
{
	char			*s1;

	s1 = malloc(100 * sizeof(char));
	s1 = argv[1];
	argi = 0;
	printf("%d\n", ft_strlen(s1));
	printf("%lu\n", strlen(s1));
	return (0);
}
*/