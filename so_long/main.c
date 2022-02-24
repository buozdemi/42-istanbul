#include "./mlx/mlx.h"
#include "so_long.h"
#include <stdio.h>

void	check_walls(char **lines, int line_count, int line_length)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
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
		while (j < line_length - 1)
		{
			if (lines[i][j] != '0')
			{
				printf("Error\n");
				return ;
			}
			j++;
		}
		i++;
	}
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

int main(){
	read_map();

/*	config map;
	
	int		height = 1024;
	int		width = 1024;
	char	*relative_path = "./img/wall.xpm";
	void	*img;
	
	map.mlx = mlx_init();
	map.window = mlx_new_window(map.mlx, width, height, "Escaping Hell");
	
	img = mlx_xpm_file_to_image(map.mlx, relative_path, &width, &height);
	mlx_put_image_to_window(map.mlx, map.window, img, 0, 0);
	mlx_loop(map.mlx);
	*/
}
