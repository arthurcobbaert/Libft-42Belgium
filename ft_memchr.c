/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:28:12 by acobbaer          #+#    #+#             */
/*   Updated: 2025/10/30 15:26:04 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		x;

	i = 0;
	*p = s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == x)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
