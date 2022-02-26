#include "./mlx/mlx.h"
#include "so_long.h"
#include <stdio.h>

int	print_components(int w, int h, config map)
{
	int		x;
	int		y;
	image	wall;
	image	player;
	image	collectible;
	image	exit;

	x = 0;
	y = 0;
	wall.img = mlx_xpm_file_to_image(map.mlx, "./img/wall.xpm", &w, &h);
	player.img = mlx_xpm_file_to_image(map.mlx, "./img/skull.xpm", &w, &h);
	collectible.img = mlx_xpm_file_to_image(map.mlx, "./img/heart.xpm", &w, &h);
	exit.img = mlx_xpm_file_to_image(map.mlx, "./img/exit.xpm", &w, &h);
	while (y < map.height)
	{
		x = 0;
		while (x < map.width)
		{
			if (map.lines[y][x] == '1')
				mlx_put_image_to_window(map.mlx, map.window, wall.img, x * 64, y * 64);
			else if (map.lines[y][x] == 'P')
				mlx_put_image_to_window(map.mlx, map.window, player.img, x * 64, y * 64);
			else if (map.lines[y][x] == 'C')
				mlx_put_image_to_window(map.mlx, map.window, collectible.img, x * 64, y * 64);
			else if (map.lines[y][x] == 'E')
				mlx_put_image_to_window(map.mlx, map.window, exit.img, x * 64, y *64);
			else if (map.lines[y][x] == '0')
				;
			else
			{
				printf("Error\n");
				return (0);
			}
			x++;
		}
		y++;
	}
	return (1);
}

int main(){
	
	config	map;
	int		is_components;
	int		w;
	int		h;

	w = 64;
	h = 64;
	map = read_map(map);
	map.mlx = mlx_init();
	map.window = mlx_new_window(map.mlx, map.width * w, map.height * h, "Escaping Hell");
	is_components = print_components(w, h, map);
	if (!is_components)
		return 0;
	mlx_loop(map.mlx);
	return 0;
}
