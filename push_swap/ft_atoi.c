/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:53:07 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/18 05:37:15 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str, int index)
{
	int	num;

	num = 0;
	if (str[index] == '-' || str[index] == '+')
	{
		if (ft_isdigit(str[index + 1]))
			ft_atoi(str, index + 1);
	}
	while (ft_isdigit(str[index]))
	{
		num = (num * 10) + (str[index] - 48);
		index++;
	}
	return (num);
}
