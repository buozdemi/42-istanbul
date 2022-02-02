/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:44:03 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/01 14:23:04 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*first_line(int fd, char *buffer)
{
	char	*line;
	int		byteread;

	byteread = 1;
	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (0);
	while (!isnlchar(buffer) && byteread != 0)
	{
		byteread = read(fd, line, BUFFER_SIZE);
		if (byteread == -1)
		{
			free(buffer);
			free(line);
			return (NULL);
		}
		line[byteread] = '\0';
		buffer = ft_strjoin(buffer, line);
	}
	free(line);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (0);
	buffer = first_line(fd, buffer);
	if (!buffer)
		return (0);
	line = next_line(buffer);
	buffer = update_buffer(buffer);
	return (line);
}
