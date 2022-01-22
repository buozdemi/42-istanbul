/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:36:09 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/11 18:40:30 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*i;
	size_t			index;

	index = 0;
	if (!dst && !src)
		return (0);
	p = (unsigned char *)dst;
	i = (unsigned char *)src;
	while (index++ < n)
	{
		*p = *i;
		i++;
		p++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str[12]= "abcdefg";
	char a[12] = "0123456789";
	ft_memcpy(str, a, 5);
	printf("%s\n", str);
}
*/
