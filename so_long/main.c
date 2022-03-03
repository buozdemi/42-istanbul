#include "./mlx/mlx.h"
#include "so_long.h"


void imgs(config *imgs)
{
	int w;
	int h;
	imgs->img->wall= mlx_xpm_file_to_image(imgs->mlx, "./img/wall.xpm", &w, &h);
	imgs->img->player= mlx_xpm_file_to_image(imgs->mlx, "./img/skull.xpm", &w, &h);
	imgs->img->collectible = mlx_xpm_file_to_image(imgs->mlx, "./img/heart.xpm", &w, &h);
	imgs->img->exit = mlx_xpm_file_to_image(imgs->mlx, "./img/exit.xpm", &w, &h);
}


int	print_components(int w, int h, config *map)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->lines[y][x] == '1')
				mlx_put_image_to_window(map->mlx, map->window, map->img->wall, x * 64, y * 64);
			else if (map->lines[y][x] == 'P')
				mlx_put_image_to_window(map->mlx, map->window, map->img->player, x * 64, y * 64);
			else if (map->lines[y][x] == 'C')
				mlx_put_image_to_window(map->mlx, map->window, map->img->collectible, x * 64, y * 64);
			else if (map->lines[y][x] == 'E')
				mlx_put_image_to_window(map->mlx, map->window, map->img->exit, x * 64, y *64);
			else if (map->lines[y][x] == '0')
				;
			else
			{
				ft_printf("Error\n"); 
				return (0);
			}
			x++;
		}
		y++;
	}
	return (1);
}

int	movement(int keycode, config *map)
{
	if (keycode == 13)
	{
		ft_printf("%c\n", map->lines[map->player_x][0]);
 		/*if (map->lines[map->player_x][map->player_y - 1] == '0')
		{
			map->lines[map->player_x][map->player_y] = '0';
			map->lines[map->player_x][map->player_y - 1] = 'P';
			ft_printf("up\n");
		}*/
	}
	/*
	else if (keycode == 0)
	{
		if (map->map[i - 1] == '0')
		{
			map->map[i] = '0';
			map->map[i - 1] = 'P';
			ft_printf("left\n");
		}
	}
	else if (keycode == 1)
	{
		if (map->map[i + map->width] == '0')
		{
			map->map[i] = '0';
			map->map[i + map->width] = 'P';
			ft_printf("down\n");
		}
	}
	else if (keycode == 2)
	{
		if (map->map[i + 1] == '0')
		{
			map->map[i] = '0';
			map->map[i + 1] = 'P';
			ft_printf("right\n");
		}
	}
	*/
	return (0);
}

int main(){
	
	config	map;
	int		is_okay;
	int		w;
	int		h;
	int		movecount;

	movecount = 0;
	w = 64;
	h = 64;
	read_map(&map, &is_okay);
	map.mlx = mlx_init();
	map.window = mlx_new_window(map.mlx, map.width * w, map.height * h, "Escaping Hell");
	
	imgs(&map);
	is_okay = print_components(w, h, &map);
	if (!is_okay)
		return 0;
	mlx_hook(map.window, 2, 1L<<0, &movement, &map);
	mlx_loop(map.mlx);
	return 0;
}
