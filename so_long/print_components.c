/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_components.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:48:23 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/06 14:55:59 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_components(config *map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (map->movecount > 0)
		ft_printf("%d\n", map->movecount);
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->lines[y][x] == '1')
				mlx_put_image_to_window\
					(map->mlx, map->window, map->img->wall, x * 64, y * 64);
			else if (map->lines[y][x] == 'P')
				mlx_put_image_to_window\
					(map->mlx, map->window, map->img->player, x * 64, y * 64);
			else if (map->lines[y][x] == 'C')
				mlx_put_image_to_window\
					(map->mlx, map->window, map->img->collectible, x * 64, y * 64);
			else if (map->lines[y][x] == 'E')
				mlx_put_image_to_window\
					(map->mlx, map->window, map->img->exit, x * 64, y * 64);
			else if (map->lines[y][x] == '0')
				;
			else
			{
				ft_printf("Error\n");
				freemem(map);
				exit(0);
			}
			x++;
		}
		y++;
	}
	map->movecount++;
}
