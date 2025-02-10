/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:02:28 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/03 16:09:24 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = numlen(n);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	res[len] = '\0';
	while (n)
	{
		res[len - 1] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	return (res);
}
