/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:32:49 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/23 17:54:07 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(t_stack *stacks, int num, int count)
{
	while(count--)
		if (stacks->stack_a[count] == num)
			return (1);
	return (0);
}
/*
void	pb(t_stack *stacks)
{
	int	temp;

	temp = stacks->stack_a[0];
}
*/
void	create_stack_a(t_stack *stacks, char **strnum)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	stacks->stack_a = malloc(stacks->len_a);
	while (j < stacks->len_a)
	{
		if (ft_isdigit(strnum[j][i]) || strnum[j][i] == '+' || strnum[j][i] == '-')
		{
			if (!(check_double(stacks, ft_atoi(strnum[j], 0), stacks->len_a - 1)))
				stacks->stack_a[stacks->len_a - j - 1] = ft_atoi(strnum[j], i);
			else
				return ;
		}
		j++;
	}
}

void	print_stack(t_stack *stacks, int *stack)
{
	int	i;

	i = 0;
	while (i < stacks->len_a - 1)
	{
		ft_printf("[%d]", stack[i]);
		i++;
	}
	ft_printf("\n");
}

int main(int argc, char **argv){
	t_stack		*stacks;

	if (argc == 1)
		return (0);
	stacks = malloc(sizeof(t_stack));
	stacks->len_a = argc;
	create_stack_a(stacks, argv);
	print_stack(stacks, stacks->stack_a);
	return (0);
}
