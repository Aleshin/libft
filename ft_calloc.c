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

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	char			*res;

	res = malloc(count * size);
	if (res == NULL)
		return (0);
	i = 0;
	while (i < count * size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}
*/