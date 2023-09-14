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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*str2;
	const unsigned char	*str1;

	i = 0;
	str1 = src;
	str2 = dst;
	if (!dst && !src)
		return (NULL);
	if (str2 > str1)
	{
		while (len--)
			str2[len] = str1[len];
	}
	else if (str2 < str1)
	{
		while (len--)
			*str2++ = *str1++;
	}
	return (dst);
}
