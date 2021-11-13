/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:30:22 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/02 15:01:16 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] && s2[index]) && (s1[index] == s2[index]))
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
