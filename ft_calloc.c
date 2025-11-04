/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:07:19 by acobbaer          #+#    #+#             */
/*   Updated: 2025/11/04 18:48:25 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_bytes;
	void	*ptr;

	if (size != 0 && count > (size_t)-1 / size)
	{
		return (NULL);
	}
	total_bytes = count size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_bytes);
	return (ptr);
}
