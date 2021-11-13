/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:48:42 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/28 15:39:29 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp1;
	int	temp2;

	i = 0;
	while (size > 0 && i < size)
	{
		temp1 = tab[size - 1];
		temp2 = tab[i];
		tab[i] = temp1;
		tab[size - 1] = temp2;
		size--;
		i++;
	}
}
