/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:47:14 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 17:01:59 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int				strlen;
	unsigned char	c;

	c = (unsigned char)chr;
	strlen = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + strlen);
	while (strlen--)
	{
		if (str[strlen] == c)
			return (((char *)str) + strlen);
	}
	if (strlen <= 0)
		return (NULL);
	return (((char *)str) + strlen);
}
/*
int	main(void)
{
	printf("%s", ft_strrchr("sara and joud", 'a'));
}*/
