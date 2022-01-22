/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:24:45 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/11 19:22:05 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*i;

	p = (unsigned char *)dst;
	i = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (i < p)
		while (len-- > 0)
			p[len] = i[len];
	else
	{
		while (len-- > 0)
		{
			*p = *i;
			p++;
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char a[20] = "abcdefg";
	char b[20] = "0123456789";
	ft_memmove(a, b, 5);
	printf("%s\n", a);
}*/
