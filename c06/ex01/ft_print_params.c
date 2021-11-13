/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:18:01 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/04 22:18:02 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			ft_putstr(argv[index]);
			ft_putstr("\n");
			index++;
		}
	}
	return (0);
}
