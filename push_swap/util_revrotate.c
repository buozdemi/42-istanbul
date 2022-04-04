/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_revrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:29:25 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/04 11:49:29 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stacks)
{
	int	i;

	i = stacks->len_a - 1;
	while (stacks->stack_a[i] == 0)
		i--;
	shift_down(stacks, stacks->stack_a);
	stacks->stack_a[0] = stacks->temp;
	stacks->stack_a[i + 1] = 0;
	print_stack(stacks, stacks->stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack *stacks)
{
	int	i;

	i = stacks->len_b - 1;
	while (stacks->stack_b[i] == 0)
		i--;
	shift_down(stacks, stacks->stack_b);
	stacks->stack_b[0] = stacks->temp;
	stacks->stack_b[i + 1] = 0;
	print_stack(stacks, stacks->stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *stacks)
{
	rra(stacks);
	rrb(stacks);
	ft_printf("rrr\n");
}
