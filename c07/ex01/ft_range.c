/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:26 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/09 12:30:38 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*arr;

	index = 0;
	arr = malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		return (0);
	}
	while (min + index < max && arr)
	{
		arr[index] = min + index;
		index++;
	}
	return (arr);
}
