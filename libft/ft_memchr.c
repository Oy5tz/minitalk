/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:56:41 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 18:31:58 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*big;
	size_t		i;

	big = (const char *)str;
	i = 0;
	while (i < n)
	{
		if (*big == (char)c)
			return ((void *)big);
		big++;
		i++;
	}
	return (NULL);
}
