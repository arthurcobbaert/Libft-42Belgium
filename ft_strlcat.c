/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:01:18 by acobbaer          #+#    #+#             */
/*   Updated: 2025/10/30 16:10:29 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		slen;
	size_t		dlen;

	i = 0;
	slen = 0;
	dlen = 0;
	while (src[slen])
		slen++;
	while (dlen < size && dst[dlen])
		dlen++;
	if (dlen == size)
		return (dlen + slen);
	while (src[i] && (dlen + i) < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
