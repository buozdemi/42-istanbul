#include "./mlx/mlx.h"
#include "so_long.h"
#include <stdio.h>

void	check_components(char **lines, int line_count, int line_length)
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
			if (lines[i][j] == 'E')
				components[1] = '1';
			if (lines[i][j] == 'P')
				components[2] = '1';
			j++;
		}
		i++;
	}
	i = 0;
	while (components[i])
	{
		if (components[i] != '1')
		{
			printf("Error\n");
			return ;
		}
		i++;
	}
}

void	check_walls(char **lines, int line_count, int line_length)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < line_length)
	{
		if (lines[0][i] != '1')
		{
			printf("Error\n");
			return ;
		}
		i++;
	}
	i = 0;
	while (i < line_length)
	{
		if (lines[line_count - 1][i] != '1')
		{
			printf("Error\n");
			return ;
		}
		i++;
	}
	i = 1;
	while (i < line_count - 1)
	{
		if (lines[i][0] != '1' || lines[i][line_length - 1] != '1')
		{
			printf("Error\n");
			return ;
		}
		i++;
	}
	check_components(lines, line_count, line_length);
}

void	check_map(char **lines)
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
		printf("Error\n");
		return ;
	}
	check_walls(lines, line_count, line_length);
}

void	read_map(void)
{
	char	**lines;
	char	*line;
	char	*map;
	int		fd;

	fd = open("./maps/map.ber", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		map = ft_strjoin(map, line);
		line = get_next_line(fd);
	}
	lines = ft_split(map, '\n');
	check_map(lines);
}
