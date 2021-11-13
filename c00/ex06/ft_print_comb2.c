/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:10:42 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/26 21:57:56 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num)
{
	char	left;
	char	right;

	left = (num / 10) + 48;
	right = (num % 10) + 48;
	ft_putchar(left, right);
}

void	ft_formatint(int first, int second)
{
	ft_putint(first);
	write(1, " ", 1);
	ft_putint(second);
	if (first != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_formatint(f, s);
			s++;
		}
		f++;
	}
}
