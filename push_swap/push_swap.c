/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:32:49 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/22 19:05:46 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(t_intarr *stacks, int num, int count)
{
	while(--count)
		if (stacks->stack_a[count] == num)
			return (1);
	return (0);
}

int main(int argc, char **argv){
	int			i;
	int			j;
	t_intarr	*stacks;

	stacks = malloc(sizeof(t_intarr));
	stacks->stack_a = malloc(argc);
	stacks->len_a = argc;
	i = 0;
	j = 1;
	if (argc == 1)
		return (0);
	while (j < argc)
	{
		if ((ft_isdigit(argv[j][i])) || (argv[j][i] == '+') || (argv[j][i] == '-'))
		{
			if (!(check_double(stacks, ft_atoi(argv[j], 0), argc)))
				stacks->stack_a[j - 1] = ft_atoi(argv[j], i);
			else
				return (0);
		}
		j++;
	}
	for (int x = 0; x < argc - 1; x++)
		ft_printf("[%d]\n", stacks->stack_a[x]);
	return (0);
}
