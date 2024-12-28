/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadeddi <osadeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:12:51 by osadeddi          #+#    #+#             */
/*   Updated: 2024/12/28 15:54:00 by osadeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstrs_fd(char **s, int num_of_strings, int fd)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	while (num_of_strings > 0)
	{
		k += ft_putstr_fd(s[i], fd);
		i++;
		num_of_strings--;
	}
	return (k * i);
}
