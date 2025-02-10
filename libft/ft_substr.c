/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:40:24 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/02 13:38:59 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	size_t	size;

	size = ft_strlen((char *)s);
	if (start >= size)
		return (ft_strdup(""));
	i = 0;
	if (len > (size - start))
		len = size - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[start + i] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
