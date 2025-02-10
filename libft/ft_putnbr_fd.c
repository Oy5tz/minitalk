/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:55:38 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/03 16:11:08 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num2;
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (num / 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	num2 = (num % 10 + '0');
	write(fd, &num2, 1);
}
