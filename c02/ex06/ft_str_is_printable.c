/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 02:17:13 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/31 02:17:46 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	printable(char letter)
{
	return (letter >= 32 && letter <= 126);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
		if (!printable(*str++))
			return (0);
	return (1);
}
