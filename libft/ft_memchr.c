/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:40:11 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/11 18:41:12 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;
	void	*pos;

	i = 0;
	p = (char *)s;
	while (n--)
	{
		if (*p == (char)c)
		{
			pos = p;
			return (pos);
		}
		p++;
	}
	return (0);
}
/*
int main()
{
	char str[10] = "cagla";
	ft_memchr(str, 2 + 256, 3);
}
*/
