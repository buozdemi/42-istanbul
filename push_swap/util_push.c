/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:24:06 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/02 13:16:06 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_up(t_stack *stacks, int *stack)
{
	int	i;

	i = 0;
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
	while (i + 1 < stacks->len_a)
	{
		stack[i + 1] = stack[i];
	}
}

void	pb(t_stack *stacks)
{
	stacks->stack_b[stacks->index_b] = stacks->stack_a[stacks->index_a];
	shift_up(stacks, stacks->stack_a);
	shift_down(stacks, stacks->stack_b);
	print_stack(stacks, stacks->stack_a);
	print_stack(stacks, stacks->stack_b);
	ft_printf("---------------------\n");
}
