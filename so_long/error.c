/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:06:38 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/06 19:58:47 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mlx/mlx.h"
#include "so_long.h"

void	exit_game(t_map *map, int img_loaded)
{
	int	i;

	i = 0;
	ft_printf("Error\n");
	while (map->lines[i])
		free(map->lines[i++]);
	if (img_loaded)
	{
		mlx_destroy_image(map->mlx, map->img->collectible);
		mlx_destroy_image(map->mlx, map->img->wall);
		mlx_destroy_image(map->mlx, map->img->player);
		mlx_destroy_image(map->mlx, map->img->exit);
		free(map->img);
	}
	system("leaks so_long");
	free(map->lines);
	free(map);
	exit(0);
}

void	check_topbottom(t_map *map, int j)
{
	int	i;

	i = 0;
	while (i < map->width)
	{
		if (map->lines[j][i] != '1')
			exit_game(map, 0);
		i++;
	}
}

void	check_walls(t_map *map)
{
	int	i;

	i = 0;
	check_topbottom(map, 0);
	check_topbottom(map, (map->height - 1));
	i = 1;
	while (i < map->height - 1)
	{
		if (map->lines[i][0] != '1' || map->lines[i][map->width - 1] != '1')
			exit_game(map, 0);
		i++;
	}
	detect_components(map);
}

void	check_map(t_map *map)
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
		exit_game(map, 0);
	map->width = line_length;
	map->height = line_count;
	check_walls(map);
}

void	read_map(t_map *map, char *berfile)
{
	char	*result;
	char	*line;
	int		fd;

	extension(berfile);
	fd = open(berfile, O_RDONLY);
	result = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		result = ft_strjoin(result, line);
		free(line);
	}
	map->lines = ft_split(result, '\n');
	free(result);
	check_map(map);
}
