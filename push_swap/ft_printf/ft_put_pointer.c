/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:51:36 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/03 16:48:36 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pointer(unsigned long long n, int *count)
{
	const char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		*count += ft_putchar_fd(base[n % 16], 1);
		return ;
	}
	else
		ft_put_pointer(n / 16, count);
	*count += ft_putchar_fd(base[n % 16], 1);
}
