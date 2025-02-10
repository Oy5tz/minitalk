/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:48:19 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/03 11:17:35 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while ((start <= end) && ft_strchr(set, s1[start]))
		start++;
	while ((start <= end) && ft_strchr(set, s1[end]))
		end--;
	str = ft_substr((char *)s1, start, end - start + 1);
	return (str);
}
