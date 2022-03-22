/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:52:48 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/03 16:07:17 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *count)
{
	if (n == -2147483648)
	{
		*count += ft_putchar_fd('-', fd);
		*count += ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		*count += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n < 10)
	{
		*count += ft_putchar_fd(n + 48, fd);
		return ;
	}
	else
		ft_putnbr_fd(n / 10, fd, count);
	*count += ft_putchar_fd(n % 10 + 48, fd);
}
