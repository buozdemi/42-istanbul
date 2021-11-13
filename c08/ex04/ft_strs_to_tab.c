/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:02:21 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/13 13:02:23 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dup)
		ft_strcpy(dup, src);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*s_str;

	s_str = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!s_str)
		return (0);
	index = 0;
	while (index < ac)
	{
		s_str[index].size = ft_strlen(av[index]);
		s_str[index].str = av[index];
		s_str[index].copy = ft_strdup(av[index]);
		if (!s_str[index++].copy)
			return (0);
	}
	s_str[index] = (struct s_stock_str){0, 0, 0};
	return (s_str);
}
