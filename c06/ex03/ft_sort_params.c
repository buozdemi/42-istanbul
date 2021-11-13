/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:29:07 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/05 11:50:18 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] && s2[index]) && (s1[index] == s2[index]))
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

void	ft_sort(int argc, char **argv)
{
	int		index;
	int		index2;
	char	*temp;

	index = 1;
	index2 = index + 1;
	while (index < argc)
	{
		while (index2 < argc)
		{
			if (ft_strcmp(argv[index], argv[index2]) < 0)
			{
				temp = argv[index];
				argv[index] = argv[index2];
				argv[index2] = temp;
			}
			index2++;
		}
		index2 = 1;
		index++;
	}
}

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
	int		index;

	index = 1;
	if (argc > 1)
	{
		ft_sort(argc, argv);
		while (index < argc)
		{
			ft_putstr(argv[index]);
			ft_putstr("\n");
			index++;
		}
	}
}
