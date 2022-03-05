#include "./mlx/mlx.h"
#include "so_long.h"


void imgs(config *imgs)
{
	imgs->img = malloc(sizeof(image));
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
	ft_printf("%d\n", map->movecount);
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
	map->movecount++;
	return (1);
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
		print_components(64, 64, map);
		ft_printf("collect: %d\n", map->collectibles);
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
		exit(0);
	}
	return (0);
}

int main(){
	
	config	*map;
	int		is_okay;
	int		w;
	int		h;

	w = 64;
	h = 64;
	map = malloc(sizeof(config));
	map->movecount = 0;
	map->collectibles = 0;
	read_map(map, &is_okay);
	map->mlx = mlx_init();
	map->window = mlx_new_window(map->mlx, map->width * w, map->height * h, "Escaping Hell");
	
	imgs(map);
	is_okay = print_components(w, h, map);
	if (!is_okay)
		return 0;
	mlx_hook(map->window, 2, 1L<<0, &movement, map);
	mlx_loop(map->mlx);
	return 0;
}
