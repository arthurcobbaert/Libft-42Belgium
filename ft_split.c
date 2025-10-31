/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:15:20 by acobbaer          #+#    #+#             */
/*   Updated: 2025/10/30 14:18:32 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countwords(const char *s, char c)
{
	size_t		i;
	size_t		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_copyword(const char *s, char c)
{
	size_t		i;
	char		*res;

	i = 0;
	while (s[i])
		i++;
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		i;
	size_t		j;

	res = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i > 0 && s[i - 1] == c && s[i] != c) || (i == 0 && s[i] != c))
		{
			res[j] = ft_copyword(s + i, c);
			j++;
		}
		i++;
	}
	res[j] = "NULL";
	return (res);
}
/*
int	main()
{
	char	**words = ft_split("arhur jjsd jejeji    eeueu3u  eu ", ' ');
	int	i;

	i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (0);	
}*/
