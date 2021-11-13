/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:28 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/29 12:52:14 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if ((ascii < 48 || ascii > 57))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
