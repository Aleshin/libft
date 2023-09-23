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

int	start(char *s, char c, int shift)
{
	int	i;

	i = shift;
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

int	end(char *s, char c, int shift)
{
	int	i;

	i = shift;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

int	count(char *s, char c)
{
	int	i;
	int	res;
	int	s_pos;
	int	e_pos;

	res = 0;
	i = 0;
	while (s[i] != '\0')
	{
		s_pos = start(s, c, i);
		e_pos = end(s, c, s_pos);
		if (e_pos == s_pos)
			break ;
		i = e_pos;
		res++;
	}
	return (res);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	int		s_pos;
	int		e_pos;
	char	**split;

	split = (char **)malloc((sizeof(char *) * (count(s, c) + 1)));
	if (split == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		s_pos = start(s, c, i);
		e_pos = end(s, c, s_pos);
		if (e_pos == s_pos)
			break ;
		i = e_pos;
		split[j] = ft_substr(s, s_pos, e_pos - s_pos);
		if (split[j] == 0)
			return (0);
		j++;
	}
	split[j] = NULL;
	return (split);
}
/*
int	ft_count(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c || i == 0)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && i < ft_strlen(s) - 1)
			j++;
		i++;
	}
	return (j + 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", count(argv[1], *argv[2]));
	printf("%s\n", ft_split(argv[1], *argv[2])[0]);
	return (0);
}
*/