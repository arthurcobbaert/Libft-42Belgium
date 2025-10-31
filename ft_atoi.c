/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:57:13 by acobbaer          #+#    #+#             */
/*   Updated: 2025/10/30 14:33:47 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	size_t		i;
	size_t		result;
	size_t		signal;

	i = 0;
	result = 0;
	signal = 1;
	while (src[i] == ' ' || (src[i] >= 9 && src[i] <= 13))
		i++;
	if (src[i] == '+' || src[i] == '-')
	{
		if (src[i] == '-')
			signal *= -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		result = result * 10 + (src[i] - '0');
		i++;
	}
	return (result * signal);
}
