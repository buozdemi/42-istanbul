/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:23:04 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/04 22:23:20 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	int	index;

	index = 0;
	while (c[index])
	{
		write(1, &c[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	index = argc - 1;
	if (argc > 1)
	{
		while (index >= 1)
		{
			ft_putstr(argv[index]);
			ft_putstr("\n");
			index--;
		}
	}
}
