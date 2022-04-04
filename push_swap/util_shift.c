/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_shift.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:35:00 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/04 11:38:16 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_up(t_stack *stacks, int *stack)
{
	int	i;

	i = 0;
	stacks->temp = stack[i];
	while (i + 1 < stacks->len_a)
	{
		stack[i] = stack[i + 1];
		stack[i + 1] = 0;
		i++;
	}
}

void	shift_down(t_stack *stacks, int *stack)
{
	int	i;

	i = stacks->len_a - 1;
	while (stack[i] == 0)
		i--;
	stacks->temp = stack[i];
	ft_printf("TEMP: (%d)\n", stacks->temp);
	while (i >= 0)
	{
		stack[i + 1] = stack[i];
		stack[i] = 0;
		i--;
	}
}
