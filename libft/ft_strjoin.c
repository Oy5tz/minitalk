/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:45:42 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/02 13:47:11 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}

// int main(void)
// {
//     char *str1 = "Hello, ";
//     char *str2 = "World!";
//     char *result;

//     result = ft_strjoin(str1, str2);

//     if (result)
//     {
//         printf("Result: %s\n", result);
//         free(result);  // Don't forget to free the allocated memory!
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }
