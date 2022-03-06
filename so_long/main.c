/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:06:29 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/06 15:04:45 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	imgs(config *imgs)
{
	int	w;
	int	h;

	imgs->img = malloc(sizeof(image));
	imgs->img->wall = mlx_xpm_file_to_image \
					  (imgs->mlx, WALL, &w, &h);
	imgs->img->player = mlx_xpm_file_to_image\
						(imgs->mlx, PLAYER, &w, &h);
	imgs->img->collectible = mlx_xpm_file_to_image\
							 (imgs->mlx, COLLECTIBLE, &w, &h);
	imgs->img->exit = mlx_xpm_file_to_image\
					  (imgs->mlx, EXIT, &w, &h);
}

void	move(config *map, int movey, int movex)
{
	if (map->lines[map->player_y + movey][map->player_x + movex] == '0' || \
			map->lines[map->player_y + movey][map->player_x + movex] == 'C' || \
			map->lines[map->player_y + movey][map->player_x + movex] == 'E')
	{
		if (map->lines[map->player_y + movey][map->player_x + movex] == 'C')
			map->collectibles--;
		if (map->lines[map->player_y + movey][map->player_x + movex] == 'E')
		{
			if (map->collectibles == 0)
			{			
				mlx_destroy_window(map->mlx, map->window);
				freemem(map);
				exit(0);
			}
			else
				return ;
		}
		map->lines[map->player_y][map->player_x] = '0';
		mlx_clear_window(map->mlx, map->window);
		map->lines[map->player_y + movey][map->player_x + movex] = 'P';
		map->player_y += movey;
		map->player_x += movex;
		print_components(map);
	}
}

int	movement(int keycode, config *map)
{
	if (keycode == 13)
		move(map, -1, 0);
	if (keycode == 0)
		move(map, 0, -1);
	if (keycode == 1)
		move(map, +1, 0);
	if (keycode == 2)
		move(map, 0, +1);
	else if (keycode == 53)
	{
		mlx_destroy_window(map->mlx, map->window);
		freemem(map);
		exit (0);
	}
	return (0);
}

int	xbutton(config *map){
	freemem(map);
	exit(0);
}

int main()
{
	config	*map;
	
	map = malloc(sizeof(config));
	map->components[0] = 'C';
	map->components[1] = 'E';
	map->components[2] = 'P';
	map->components[3] = '\0';
	map->movecount = 0;
	map->collectibles = 0;
	read_map(map);
	map->mlx = mlx_init();
	map->window = mlx_new_window\
				  (map->mlx, map->width * 64, map->height * 64, "Escaping Hell");
	imgs(map);
	print_components(map);
	mlx_hook(map->window, 2, 1L<<0, &movement, map);
	mlx_hook(map->window, 17, 0, &xbutton, map);
	mlx_loop(map->mlx);
	return (0);
}
