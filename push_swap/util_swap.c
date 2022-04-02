/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:21:37 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/02 12:23:12 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stacks)
{
	int	temp;

	if (stacks->len_a > 1)
	{
		temp = stacks->stack_a[0];
		stacks->stack_a[0] = stacks->stack_a[1];
		stacks->stack_a[1] = temp;
	}
	print_stack(stacks, stacks->stack_a);
	ft_printf("sa\n");
}

void	sb(t_stack *stacks)
{
	int	temp;

	if (stacks->len_b > 1)
	{
		temp = stacks->stack_b[0];
		stacks->stack_b[0] = stacks->stack_b[1];
		stacks->stack_b[1] = temp;
	}
	ft_printf("sb\n");
}

void	ss(t_stack *stacks)
{
	sa(stacks);
	sb(stacks);
	ft_printf("ss\n");
}
