/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:01:09 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/29 13:02:11 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		ascii = (int) str[index];
		if (ascii < 97 || ascii > 122)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
