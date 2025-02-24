/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadeddi <osadeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:25:13 by osadeddi          #+#    #+#             */
/*   Updated: 2024/09/03 18:48:40 by osadeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	s = src;
	d = dest;
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[50];
	char	dest[50];

	src[50] = "hello my name is osadeddi";
	memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}
*/
