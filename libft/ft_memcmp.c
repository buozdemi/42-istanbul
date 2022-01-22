/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:51:35 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/05 13:16:57 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (n--)
	{
		if (*x - *y != 0)
		{
			return (*x - *y);
		}
		x++;
		y++;
	}
	return (0);
}
/*
int main(){
	char a[20] = "caglb";
	char b[20] = "cagla";
	ft_memcmp(a, b, 5);
}
*/
