/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:05:58 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/24 12:43:51 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	size_t	strlen;

	i = 0;
	if (!s)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (len > strlen)
		len = strlen - start;
	if (start > strlen)
		return (ft_strdup(""));
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && len--)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
