/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:14:22 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/04 11:49:08 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack_a(t_stack *stacks, char **strnum)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	stacks->stack_a = malloc(sizeof(int) * stacks->len_a);
	if (!stacks->stack_a)
		return ;
	while (j < stacks->len_a + 1)
	{
		if (ft_isdigit(strnum[j][i]) || strnum[j][i] == '+' \
				|| strnum[j][i] == '-')
			stacks->stack_a[j - 1] = ft_atoi(strnum[j], i);
		else
		{
			ft_printf("Error\n");
			exit(0);
		}
		j++;
	}
	if (check_double(stacks))
		exit(0);
}

void	create_stack_b(t_stack *stacks)
{
	stacks->stack_b = malloc(sizeof(int) * stacks->len_b);
	if (!stacks->stack_b)
		return ;
}
