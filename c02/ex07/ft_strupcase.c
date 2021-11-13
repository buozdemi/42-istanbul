/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:44:22 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/29 14:46:55 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;
	int	ascii;

	index = 0;
	while (str[index] != '\0')
	{
		ascii = (int) str[index];
		if (ascii >= 97 && ascii <= 122)
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
