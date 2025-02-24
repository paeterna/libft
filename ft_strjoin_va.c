/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_va.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadeddi <osadeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:50:38 by osadeddi          #+#    #+#             */
/*   Updated: 2025/02/24 19:52:35 by osadeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	join_strings(char **str, int num_of_strings, va_list args)
{
	char	*tmp;
	int		i;

	*str = ft_strdup(va_arg(args, char *));
	if (!*str)
		return (0);
	i = 1;
	while (i < num_of_strings)
	{
		tmp = ft_strjoin(*str, va_arg(args, char *));
		free(*str);
		if (!tmp)
			return (0);
		*str = tmp;
		i++;
	}
	return (1);
}

char	*ft_strjoin_va(int num_of_strings, ...)
{
	va_list	args;
	char	*str;

	if (num_of_strings <= 0)
		return (0);
	va_start(args, num_of_strings);
	if (!join_strings(&str, num_of_strings, args))
	{
		va_end(args);
		return (0);
	}
	va_end(args);
	return (str);
}
