/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:57:44 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/03 15:45:54 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen((char *)src);
	dlen = ft_strlen(dst);
	i = 0;
	if (dlen >= size)
		return (size + slen);
	while (src[i] != '\0' && ((dlen + i) < (size - 1)))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
/*
int main ()
{
    char dst[20] = "Hello, ";
    const char *src = "World!";
    size_t size = sizeof(dst);

    size_t result = ft_strlcat(dst, src, size);

    printf("Destination: %s\n", dst);  // Expected: "Hello, World!"
    printf("Result: %zu\n", result);  // Expected: 13 (length of "Hello,
		World!")

    return (0);
}*/
