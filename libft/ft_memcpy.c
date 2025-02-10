/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaber <sjaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:45:48 by sjaber            #+#    #+#             */
/*   Updated: 2024/09/01 15:51:47 by sjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char	*desti;
	char	*srci;

	desti = (char *)dest;
	srci = (char *)src;
	if (!desti && !srci)
		return (0);
	while (num--)
		*desti++ = *srci++;
	return (dest);
}
/*
int	main(void)
{
char	csrc[] = "saras place";
char	cdest[100];
ft_memcpy(cdest, csrc, 4 );
printf("Copied string is %s", cdest);
}*/
