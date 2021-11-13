/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:14:24 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/23 20:14:26 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		col++;
	}
}

void	middleline(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		col++;
	}
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	while (line <= y)
	{
		if (line == 1 || line == y)
		{
			firstline(x);
		}
		else
		{
			middleline(x);
		}
		line++;
		ft_putchar('\n');
	}
}
