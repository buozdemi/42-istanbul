/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:32:49 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/04 11:48:07 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(t_stack *stacks)
{
	int	i;
	int	j;

	i = 1;
	while (i < stacks->len_a)
	{
		j = 0;
		while (j < i)
		{
			if (stacks->stack_a[j] == stacks->stack_a[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_stack(t_stack *stacks, int *stack)
{
	int	i;

	i = 0;
	while (i < stacks->len_b)
	{
		ft_printf("[%d]\n", stack[i]);
		i++;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack		*stacks;

	if (argc == 1)
		return (0);
	stacks = malloc(sizeof(t_stack));
	stacks->len_a = argc - 1;
	stacks->len_b = argc - 1;
	create_stack_a(stacks, argv);
	create_stack_b(stacks);
	return (0);
}
