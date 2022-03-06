#include "./mlx/mlx.h"
#include "so_long.h"
#include <stdio.h>

void	freemem(config *map)
{
	int	i;

	i = 0;
	while (map->lines[i])
		free(map->lines[i++]);
	free(map->lines);
	free(map);
}

void	check_components(config *map)
{
	char	components[4] = "CEP\0"; 
	int	y;
	int	x;

	y = 0;
	x = 0;
	while(y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->lines[y][x] == 'C')
			{
				components[0] = '1';
				map->collectibles++;
			}
			else if (map->lines[y][x] == 'E')
				components[1] = '1';
			else if (map->lines[y][x] == 'P')
			{
				components[2] = '1';
				map->player_x = x;
				map->player_y = y;
			}
			x++;
		}
		y++;
	}
	y = 0;
	while (components[y])
	{
		if (components[y] != '1')
		{
			ft_printf("Error\n");
			freemem(map);
			exit(0);
		}
		y++;
	}
}

void	check_walls(config *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map->width)
	{
		if (map->lines[0][i] != '1')
		{
			ft_printf("Error\n");
		//	freemem(map);
			//check_leaks();
			exit(0);
		}
		i++;
	}
	i = 0;
	while (i < map->width)
	{
		if (map->lines[map->height - 1][i] != '1')
		{
			ft_printf("Error\n");
			freemem(map);
			exit(0);
		}
		i++;
	}
	i = 1;
	while (i < map->height - 1)
	{
		if (map->lines[i][0] != '1' || map->lines[i][map->width - 1] != '1')
		{
			ft_printf("Error\n");
			freemem(map);
			exit(0);
		}
		i++;
	}
	check_components(map);
}

void	check_map(config *map)
{
	int	i;
	int	line_count;
	int	line_length;

	line_count = 0;
	i = 0;
	while (map->lines[i])
		i++;
	line_count = i;
	i = 0;
	while (map->lines[0][i] != '\n' && map->lines[0][i] != '\0')
		i++;
	line_length = i;
	if (line_length == line_count)
	{
		ft_printf("Error\n");
		freemem(map);
		exit(0);
	}
	map->width = line_length;
	map->height = line_count;
	check_walls(map);
}

void	read_map(config *map)
{
	char	*result;
	char	*line;
	int		fd;

	fd = open("./maps/map.ber", O_RDONLY);
	result = ft_strdup("");
	
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		result = ft_strjoin(result, line);
		free(line);
	}
/*	
	while (line)
	{
		ft_printf("%s\n", result);
		result = ft_strjoin(result, line);
		free(line);
		line = get_next_line(fd);
	}
	*/
	map->lines = ft_split(result, '\n');
	free(result);
	//free(line);
	check_map(map);
}
