/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:15:38 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 18:50:18 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;

	sum = nmemb * size;
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_bzero(p, sum);
	return (p);
}
