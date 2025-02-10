/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:22:16 by sjaber            #+#    #+#             */
/*   Updated: 2024/08/28 14:44:07 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char s[20] = "sarassss";
	ft_bzero(s, 4);
	printf("%s",s); 
}*/
