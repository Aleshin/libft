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

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*substr;

	substr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (substr == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		substr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		substr[i] = s2[j];
		i++;
		j++;
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