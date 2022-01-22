/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:53:07 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/11 18:46:35 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign -= (*str++ == '-') * 2;
	while (ft_isdigit(*str))
		num = (num * 10) + (*str++ - 48);
	return (sign * num);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(){
	char *n = "\t\v\f\r\n \f-06050";
	printf("%d\n", ft_atoi(n));
}*/
