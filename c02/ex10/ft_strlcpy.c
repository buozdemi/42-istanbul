/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 02:18:08 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/31 02:18:29 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	if (size)
	{
		while (src[i] && i < (size - 1))
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (src_size);
}
