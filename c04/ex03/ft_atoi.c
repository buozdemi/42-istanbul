/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:33:07 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/04 13:12:56 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

bool	ft_isspace(char arg)
{
	return ((arg >= '\t' && arg <= '\r') || arg == 32);
}

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	number;

	index = 0;
	sign = 1;
	number = 0;
	while (str[index] == '+' || str[index] == '-' || ft_isspace(str[index]))
	{
		if ((str[index] == '-' || str[index] == '+') && \
				(ft_isspace(str[index + 1])))
			return (0);
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] && (str[index] >= 48 && str[index] <= 57))
	{
		number *= 10;
		number += str[index] - 48;
		index++;
	}
	return (number * sign);
}
