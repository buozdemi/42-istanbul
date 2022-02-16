/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:09:27 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/16 13:24:07 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isdouble(char *str, char c, int i)
{
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		i--;	
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if ((argv[1][i] == argv[2][j]) && !(isdouble(argv[1], argv[2][j], i)))
				{
					ft_putchar(argv[1][i]);
					break ;
				}
				else
					j++;
			}
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
