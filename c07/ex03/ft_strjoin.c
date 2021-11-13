/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:35:09 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/12 18:56:12 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	g_index;

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_total(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_strlen(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	char	*read_head;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_total(strs, size, ft_strleng(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	if (!string)
		return (0);
	read_head = string;
	g_index = 0;
	while (g_index < size)
	{
		ft_strcpy(read_head, strs[g_index]);
		read_head += ft_strlen(strs[g_index]);
		if (g_index < size - 1)
		{
			ft_strcpy(read_head, sep);
			read_head += ft_strlen(sep);
		}
		g_index++;
	}
	*read_head = '\0';
	return (string);
}
