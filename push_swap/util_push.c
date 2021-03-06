/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:24:06 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/02 15:39:10 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *stacks)
{
	shift_down(stacks, stacks->stack_b);
	stacks->stack_b[0] = stacks->stack_a[0];
	shift_up(stacks, stacks->stack_a);
	print_stack(stacks, stacks->stack_a);
	print_stack(stacks, stacks->stack_b);
	ft_printf("pb\n");
}

void	pa(t_stack *stacks)
{
	shift_down(stacks, stacks->stack_a);
	stacks->stack_a[0] = stacks->stack_b[0];
	shift_up(stacks, stacks->stack_b);
	print_stack(stacks, stacks->stack_a);
	print_stack(stacks, stacks->stack_b);
	ft_printf("pa\n");
}
