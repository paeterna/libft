/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsharq <malsharq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:33:00 by osadeddi          #+#    #+#             */
/*   Updated: 2025/02/19 21:00:02 by malsharq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "teste";
// 	char c = '\0';
// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", str);
// 	printf("%s\n", strchr(str, c));
// 	printf("%s\n", str);
// 	return (0);
// }
