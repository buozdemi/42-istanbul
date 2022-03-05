/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:15:28 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/03 20:00:23 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define BUFFER_SIZE 100
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

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
	void	*mlx;
	void	*window;
	int		width;
	int		height;
	int		player_x;
	int		player_y;
	image	*img;
}				config;



void	imgs(config *imgs);
int		check_components(char **lines, int line_count, int	line_length, config *map);
int		check_walls(char **lines, int line_count, int line_length, int *is_okay, config *map);
void	check_map(char **lines, config *map, int *is_okay);
void	read_map(config *map, int *is_okay);
int		print_components(int img_width, int img_height, config *map);
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
void	ft_putnbr_fd(int n, int fd, int *count);
int		ft_putstr_fd(char *s, int fd);

#endif
