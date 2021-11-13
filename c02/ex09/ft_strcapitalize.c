/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:50:38 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/30 18:57:35 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (!((str[i - 1] >= 48 && str[i - 1] <= 57) || \
					(str[i - 1] >= 65 && str[i - 1] <= 90) || \
					(str[i - 1] >= 97 && str[i - 1] <= 122)))
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*int main(){
	char str1[100]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str1);
	printf("%s", str1);
	return 0;
}*/
