/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:58:57 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/08 15:39:46 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (s[len] == (unsigned char)c)
		return ((char *)s + len);
	while (len--)
		if (s[len] == (unsigned char)c)
			return ((char *)s + len);
	return (NULL);
}
