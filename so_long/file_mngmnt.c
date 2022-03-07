/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:00:12 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/07 18:42:41 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	extension(t_map *map, char *str)
{
	int	len;

	if (!str)
	{
		ft_printf("Error\n");
		free(map);
		exit(0);
	}
	len = ft_strlen(str);
	if (str[len - 1] != 'r' && str[len - 2] != 'e' && \
			str[len - 3] != 'b' && str[len - 4] != '.')
	{
		ft_printf("Error\n");
		free(map);
		exit(0);
	}
}

void	free_map(t_map *map)
{
	ft_printf("Error\n");
	free(map);
	exit(0);
}
