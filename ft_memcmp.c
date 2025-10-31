/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:34:54 by acobbaer          #+#    #+#             */
/*   Updated: 2025/10/30 15:57:44 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*len1;
	const unsigned char	*len2;

	len1 = s1;
	len2 = s2;
	i = 0;
	while (i < n)
	{
		if (len1[i] != len2[i])
			return (len1[i] - len2[i]);
		i++;
	}
	return (0);
}
