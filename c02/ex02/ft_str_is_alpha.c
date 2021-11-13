/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:34:00 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/29 12:34:19 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((ascii < 97 || ascii > 122) && (ascii < 65 || ascii > 90))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
