/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:34:38 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 16:33:26 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int found)
{
	int				i;
	unsigned char	c;

	c = (unsigned char)found;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == '\0' && c != '\0')
		return (NULL);
	return ((char *)str + i);
}
/*
int	main(void)
{

	printf("%s", ft_strchr("sara and joud", 'j'));
	return (0);
}*/
