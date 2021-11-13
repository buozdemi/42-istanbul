/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:44:05 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/02 10:56:52 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	index;

	length = ft_strlen(dest);
	index = 0;
	while (src[index])
	{
		dest[length] = src[index];
		index++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
