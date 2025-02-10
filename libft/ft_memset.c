/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:17:30 by sjaber            #+#    #+#             */
/*   Updated: 2024/08/28 14:21:50 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	value;
	size_t			i;

	i = 0;
	s = str;
	value = (unsigned char)c;
	while (i < n)
	{
		s[i] = value;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[20] = "saras place";
	ft_memset (str, '0', 5);
	printf("%s", str);
}*/
