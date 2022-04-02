/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:32:40 by nkahrima          #+#    #+#             */
/*   Updated: 2022/04/02 12:33:18 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"
# include <stdio.h>

typedef struct	s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	index_a;
	int	index_b;
	int	len_a;
	int	len_b;
}				t_stack;

void	shift_up(t_stack *stacks, int *stack);
char	**ft_split(char const *s, char c);
void	print_stack(t_stack *stacks, int *stack);
int		ft_atoi(char *str, int index);
int		ft_isdigit(int c);
int		ft_isspace(int c);
int		check_double(t_stack *stacks);
void	create_stack_a(t_stack *stacks, char **strnum);
void	create_stack_b(t_stack *stacks);
void	sa(t_stack *stacks);
void	sb(t_stack *stacks);
void	ss(t_stack *stacks);
void	pa(t_stack *stacks);
void	pb(t_stack *stacks);

#endif
