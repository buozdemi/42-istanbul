/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:53:22 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/29 14:53:43 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;
	int	ascii;

	index = 0;
	while (str[index] != '\0')
	{
		ascii = (int) str[index];
		if (ascii >= 65 && ascii <= 90)
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
