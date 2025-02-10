/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:31:36 by sjaber            #+#    #+#             */
/*   Updated: 2025/02/10 13:32:04 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putun(unsigned int n)
{
	char	num2;
	long	num;
	int		count;

	count = 0;
	num = n;
	if (num / 10)
		count += ft_putun(num / 10);
	num2 = (num % 10 + '0');
	count++;
	write(1, &num2, 1);
	return (count);
}

int	ft_puthex(unsigned int num)
{
	char	num2;
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (num / 16)
		count += ft_puthex(num / 16);
	num2 = hex[num % 16];
	count++;
	write(1, &num2, 1);
	return (count);
}

int	ft_puthexx(unsigned int num)
{
	char	num2;
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (num / 16)
		count += ft_puthexx(num / 16);
	num2 = hex[num % 16];
	count++;
	write(1, &num2, 1);
	return (count);
}

int	ft_pointer(unsigned long n, char *hex)
{
	int		count;
	char	res[17];
	int		i;

	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	write(1, "0x", 2);
	count += 2;
	while (n > 0)
	{
		res[i] = hex[n % 16];
		n /= 16;
		i++;
	}
	res[i] = '\0';
	while (--i >= 0)
	{
		write(1, &res[i], 1);
		count++;
	}
	return (count);
}
