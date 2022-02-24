/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:15:28 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/24 19:13:35 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define BUFFER_SIZE 1
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	map_config
{
	void	*mlx;
	void	*window;
}				config;

void	check_components(char **lines, int line_count, int	line_length);
void	check_walls(char **lines, int line_count, int line_length);
void	check_map(char **lines);
void	read_map(void);
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


# define WALL "./img/wall.xpm"
# define PLAYER
# define COLLECTIBLE
# define EXIT
#endif
