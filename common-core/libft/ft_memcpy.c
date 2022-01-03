/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:36:09 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/03 18:42:57 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	const unsigned char	*i;

	p = (unsigned char *)dst;
	i = (const unsigned char *)src;
	while (n--)
	{
		*p = *i;
		i++;
		p++;
	}
	return (dst);	
}

int main()
{
	char str[12]= "ibrahimasd4";
	char a[12]=   "ibrahimasd4";
	memcpy(a + 3, a, 7);
	printf("%s\n", a);
	ft_memcpy(str+4, str, 7);
	printf("%s\n", str);
}
