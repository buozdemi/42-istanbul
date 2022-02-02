/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:44:20 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/01 14:28:14 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*update_buffer(char *buffer);
char	*next_line(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char	*next_line(char *buffer);
char	*update_buffer(char *buffer);
int		isnlchar(char *buffer);
int		ft_strlen(char *s);

#endif
