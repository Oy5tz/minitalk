/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:43:05 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 18:53:04 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*p;

	size = ft_strlen((char *)s) + 1;
	p = malloc(size);
	if (!p)
		return (NULL);
	return ((char *)ft_memcpy(p, s, size));
}
