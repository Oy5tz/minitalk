/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:51:42 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 16:13:42 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	csrc = (char *)src;
	cdst = (char *)dst;
	i = 0;
	if (cdst > csrc)
		while (len-- > 0)
			cdst[len] = csrc[len];
	else
	{
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
