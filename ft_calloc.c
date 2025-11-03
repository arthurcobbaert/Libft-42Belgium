/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:07:19 by acobbaer          #+#    #+#             */
/*   Updated: 2025/10/31 20:49:19 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*res;

	i = 0;
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	res = malloc(total);
	if (!res)
		return (NULL);
	while (i < total)
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}
