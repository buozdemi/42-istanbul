#include "./mlx/mlx.h"
#include "so_long.h"
#include <stdio.h>

int	check_components(char **lines, int line_count, int line_length, config *map)
{
	char	components[4] = "CEP\0"; 
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < line_count)
	{
		j = 0;
		while (j < line_length)
		{
			if (lines[i][j] == 'C')
				components[0] = '1';
			else if (lines[i][j] == 'E')
				components[1] = '1';
			else if (lines[i][j] == 'P')
			{
				components[2] = '1';
				map->player_x = j;
				map->player_y = i;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (components[i])
	{
		if (components[i] != '1')
		{
			ft_printf("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_walls(char **lines, int line_count, int line_length, int *is_okay, config *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < line_length)
	{
		if (lines[0][i] != '1')
		{
			ft_printf("Error\n");
			*is_okay = 0;
			return (*is_okay);
		}
		i++;
	}
	i = 0;
	while (i < line_length)
	{
		if (lines[line_count - 1][i] != '1')
		{
			ft_printf("Error\n");
			*is_okay = 0;
			return (*is_okay);
		}
		i++;
	}
	i = 1;
	while (i < line_count - 1)
	{
		if (lines[i][0] != '1' || lines[i][line_length - 1] != '1')
		{
			ft_printf("Error\n");
			*is_okay = 0;
			return (*is_okay);
		}
		i++;
	}
	*is_okay = check_components(lines, line_count, line_length, map);
	return (*is_okay);
}

void	check_map(char **lines, config *map, int *is_okay)
{
	int	i;
	int	line_count;
	int	line_length;

	line_count = 0;
	i = 0;
	while (lines[i])
		i++;
	line_count = i;
	i = 0;
	while (lines[0][i] != '\n' && lines[0][i] != '\0')
		i++;
	line_length = i;
	if (line_length == line_count)
	{
		ft_printf("Error\n");
		free(map->map);
		*is_okay = 0;
	}
	*is_okay = check_walls(lines, line_count, line_length, is_okay, map);
	if (!*is_okay)
	{
		free(map->map);
	}
	map->width = line_length;
	map->height = line_count;
}

void	read_map(config *map, int *is_okay)
{
	char	**lines;
	char	*line;
	int		fd;

	fd = open("./maps/map.ber", O_RDONLY);
	line = get_next_line(fd);
	map->map = ft_strdup("");
	while (line)
	{
		map->map = ft_strjoin(map->map, line);
		line = get_next_line(fd);
	}
	lines = ft_split(map->map, '\n');
	map->lines = lines;
	free(line);
	check_map(lines, map, is_okay);
}
