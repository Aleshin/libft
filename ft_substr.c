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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	if (ft_strlen(s) < start || len == 0 || ft_strlen(s) == 0)
	{
		substr = (char *)malloc(1 * sizeof(char));
		if (substr == NULL)
			return (0);
		*substr = '\0';
		return (substr);
	}
	else if (ft_strlen(s) - start < len)
		substr = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (0);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}
*/