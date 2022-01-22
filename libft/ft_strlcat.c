/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:47:16 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/11 19:39:37 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (dst[p])
		p++;
	len = p + ft_strlen(src);
	if (dstsize <= p)
		return (dstsize + ft_strlen(src));
	while (src[i] && p < (dstsize - 1))
		dst[p++] = src[i++];
	dst[p] = '\0';
	return (len);
}
