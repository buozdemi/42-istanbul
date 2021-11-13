/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:09:39 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/29 13:10:58 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	ascii;

	index = 0;
	if (str[index] == 0)
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		ascii = (int)str[index];
		if (ascii < 65 || ascii > 90)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
