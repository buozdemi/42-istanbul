/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nc.kahriman7@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:55:27 by nkahrima          #+#    #+#             */
/*   Updated: 2021/10/28 15:43:02 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;
	int	nextindex;

	index = 0;
	while (index < size)
	{
		nextindex = index + 1;
		while (nextindex < size)
		{
			if (tab[index] > tab[nextindex])
			{
				temp = tab[index];
				tab[index] = tab[nextindex];
				tab[nextindex] = temp;
			}
			nextindex++;
		}	
		index++;
	}
}
