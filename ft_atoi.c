/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osadeddi <osadeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:45:19 by osadeddi          #+#    #+#             */
/*   Updated: 2024/08/27 15:15:47 by osadeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	main(void)
{
	char	a[];
	char	b[];
	int		x;
	int		y;

	a[] = "   ---+-+-2147884836501";
	b[] = "21474836487";
	x = ft_atoi(a);
	y = ft_atoi(b);
	printf("x = %d\ny = %d\n",x,y);
	printf("atoi = %d\natoi = %d\n", atoi(a),atoi(b));
}
*/
