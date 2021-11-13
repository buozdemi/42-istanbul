/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:05:56 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/05 12:04:12 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc > 0)
	{
		while (argv[0][index])
		{
			ft_putchar(argv[0][index]);
			index++;
		}
		ft_putchar('\n');
	}
	return (0);
}
