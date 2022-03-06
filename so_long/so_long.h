/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:15:28 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/06 17:18:53 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define BUFFER_SIZE 100
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include "./mlx/mlx.h"

typedef struct 	img
{
	void	*wall;
	void	*collectible;
	void	*player;
	void	*exit;
	
}				image;

typedef struct	map_config
{
	char	**lines;
	char	*map;
	char	components[4];
	void	*mlx;
	void	*window;
	int		width;
	int		height;
	int		player_x;
	int		player_y;
	int		movecount;
	int		collectibles;
	image	*img;
}				config;

void	extension(char *str);
void	freemem(config *map);
void	imgs(config *imgs);
void	detect_components(config *map);
void	check_components(config *map);
void	check_topbottom(config *map, int j);
void	check_walls(config *map);
void	check_map(config *map);
void	read_map(config *map, char *berfile);
void	print_components(config *map);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	*get_next_line(int fd);
char	*update_buffer(char *buffer);
char	*next_line(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char	*next_line(char *buffer);
char	*update_buffer(char *buffer);
char	*ft_strchr(const char *s, int c);
int		isnlchar(char *buffer);
int		ft_strlen(char *s);
int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd, int *count);

# define PLAYER "./img/skull.xpm"
# define COLLECT "./img/heart.xpm"
# define EXIT "./img/exit.xpm"
# define WALL "./img/wall.xpm"

#endif
