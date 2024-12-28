/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrjoin_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadeddi <osadeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 15:12:51 by osadeddi          #+#    #+#             */
/*   Updated: 2024/12/28 16:18:15 by osadeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstrjoin_fd(char **s, int num_of_strings, int fd)
{
	int	i;
	char	*tmp;
	char	*str;

	i = 1;
	if (!s)
		return (0);
	str = ft_strdup(s[0]);
	if (!str)
		return (0);
	while (i < num_of_strings)
	{
		tmp = ft_strjoin(str, s[i]);
		free(str);
		if (!tmp)
			return (0);
		str = tmp;
		i++;
	}
	return (ft_putstr_fd(str, fd));
}
