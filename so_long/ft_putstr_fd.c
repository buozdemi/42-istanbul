/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:52:23 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/28 15:03:57 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		i = ft_putstr_fd("(null)", 1);
		return (i);
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}	
	return (i);
}
