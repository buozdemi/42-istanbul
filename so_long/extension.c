/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:00:12 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/06 17:12:31 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	extension(char *str)
{
	int	len;

	if (!str)
		exit(0);
	len = ft_strlen(str);
	if (str[len - 1] != 'r' && str[len - 2] != 'e' && \
			str[len - 3] != 'b' && str[len - 4] != '.')
		exit(0);
}
