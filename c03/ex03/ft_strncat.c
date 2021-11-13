/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:09:18 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/02 11:10:03 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	length;

	index = 0;
	length = ft_strlen(dest);
	while (src[index] && nb > 0)
	{
		dest[length] = src[index];
		nb--;
		index++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
