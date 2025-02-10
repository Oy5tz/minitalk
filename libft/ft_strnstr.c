/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:31:12 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 18:42:38 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i] == little[j]) && little[j] && (i < len))
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

/*
int	main(void)
{
const char	*big = "Hello, World!";
const char	*small = "World";
char		*result = ft_strnstr(big, small, 12);
// Searches "Hello, World" within the first 12 characters
if (result) {
    printf("Found: %s\n", result);  // Output: "Found: World!"
} else {
    printf("Not found\n");
}
}*/
