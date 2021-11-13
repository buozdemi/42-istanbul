/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:39:49 by nkahrima          #+#    #+#             */
/*   Updated: 2021/11/05 17:39:51 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	while (x * x <= nb)
	{
		if (x >= 46341)
		{
			return (0);
		}
		if (x * x == nb)
		{
			return (x);
		}
		x++;
	}
	return (0);
}