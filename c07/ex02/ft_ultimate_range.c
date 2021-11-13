/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:57:59 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/09 12:37:25 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	size;

	index = 0;
	size = max - min;
	if (min >= max)
	{
		return (0);
	}
	range[0] = malloc((max - min) * sizeof(int));
	if (!*range)
	{
		return (-1);
	}
	while (min < max)
	{
		range[0][index] = min;
		min++;
		index++;
	}	
	return (size);
}
