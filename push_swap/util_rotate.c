/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:40:14 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/04 11:26:48 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stacks)
{
	int	i;

	i = stacks->len_a - 1;
	while (stacks->stack_a[i] == 0)
		i--;
	shift_up(stacks, stacks->stack_a);
	stacks->stack_a[i] = stacks->temp;
	print_stack(stacks, stacks->stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack *stacks)
{
	int	i;

	i = stacks->len_b - 1;
	while (stacks->stack_b[i] == 0)
		i--;
	shift_up(stacks, stacks->stack_b);
	stacks->stack_b[i + 1] = stacks->temp;
	print_stack(stacks, stacks->stack_b);
	ft_printf("rb\n");
}

void	rr(t_stack *stacks)
{
	ra(stacks);
	rb(stacks);
	ft_printf("rr\n");
}
