/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:06:38 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/06 14:44:47 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "./mlx/mlx.h"
#include "so_long.h"

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
	int	i;

	i = 0;
	while (map->components[i])
	{
		if (map->components[i] != '1')
		{
			ft_printf("Error\n");
			freemem(map);
			exit(0);
		}
		i++;
	}
}

void	detect_components(config *map)
{
	int		y;
	int		x;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->lines[y][x] == 'C')
			{
				map->components[0] = '1';
				map->collectibles++;
			}
			else if (map->lines[y][x] == 'E')
				map->components[1] = '1';
			else if (map->lines[y][x] == 'P')
			{
				map->components[2] = '1';
				map->player_x = x;
				map->player_y = y;
			}
			x++;
		}
		y++;
	}
	check_components(map);
}

void	check_topbottom(config *map, int j)
{
	int	i;

	i = 0;
	while (i < map->width)
	{
		if (map->lines[j][i] != '1')
		{
			ft_printf("Error\n");
			freemem(map);
			exit(0);
		}
		i++;
	}
}

void	check_walls(config *map)
{
	int	i;

	i = 0;
	check_topbottom(map, 0);
	check_topbottom(map, (map->height - 1));
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
	detect_components(map);
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
	map->lines = ft_split(result, '\n');
	free(result);
	check_map(map);
}
