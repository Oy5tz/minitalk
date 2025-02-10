/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:46:29 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/03 15:45:29 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t  strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (src[i] != '\0')
	{
		if ((size - 1) == i)
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void) 
{
    char dst[20];
    const char *src = "Hello, World!";
    size_t size = 10;

    size_t result = ft_strlcpy(dst, src, size);
    size_t real = strlcpy(dst, src, size);
    printf("result = %ld \t", result); 
    printf("real = %ld", real);
    return (0);
}*/
