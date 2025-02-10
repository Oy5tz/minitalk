/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:29:30 by sjaber            #+#    #+#             */
/*   Updated: 2025/02/10 13:36:22 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
				count += ft_check(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	ft_check(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'u')
		return (ft_putun(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthexx(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_pointer(va_arg(args, unsigned long), "0123456789abcdef"));
	else
		return (0);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	char	num2;
	long	num;
	int		count;

	count = 0;
	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num / 10)
		count += ft_putnbr(num / 10);
	num2 = (num % 10 + '0');
	count++;
	write(1, &num2, 1);
	return (count);
}
