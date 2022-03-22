/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:32:49 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/18 05:29:22 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	number_count(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 48 && argv[1][i] <= 57)
			count++;
		i++;
	}
	return (count);
}

int main(int argc, char **argv){
	int	i;
	int num = 0;

	i = 0;
	if (argc == 1)
		return (0);
	while (argv[1][i])
	{
		if (ft_isspace(argv[1][i]))
			i++;
		else if (ft_isdigit(argv[1][i]) || argv[1][i] == '+' || argv[1][i] == '-')
		{
			num = ft_atoi(str, i);
		}
		else
			ft_printf("Error\nINVALID ARGUMENT!");
		i++;
	}
	ft_printf("number: %d\n", num);
	return (0);
}
