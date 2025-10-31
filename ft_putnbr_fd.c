/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acobbaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:57:45 by acobbaer          #+#    #+#             */
/*   Updated: 2025/10/31 20:52:05 by acobbaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long		num;
	long		res;

	num = n;
	if (num == '0')
		write(fd, "0", 1);
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	res = num % 10 + '0';
	if (num > 9)
	{
		ft_putnbr_fd((num / 10), fd);
		write(fd, &res, 1);
	}
	else
		write(fd, &res, 1);
}
