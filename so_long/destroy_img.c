/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:20:54 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/07 13:46:34 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroyimg(t_map *map)
{
	mlx_destroy_image(map->mlx, map->img->collectible);
	mlx_destroy_image(map->mlx, map->img->player);
	mlx_destroy_image(map->mlx, map->img->exit);
	mlx_destroy_image(map->mlx, map->img->wall);
	free(map->img);
	exit_game(map);
}
