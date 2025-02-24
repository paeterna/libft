/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsharq <malsharq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:48:24 by osadeddi          #+#    #+#             */
/*   Updated: 2025/02/09 18:31:32 by malsharq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	b;

	b = 0;
	while (s[b])
		b++;
	return (b);
}
/*
void	main(void)
{
	char	a[];

	a[] = "omar";
	ft_strlen(a);
	printf(" a length is %d", ft_strlen(a));
}
#include <stdio.h>

*/
