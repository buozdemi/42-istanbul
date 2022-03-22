/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 04:32:40 by nkahrima          #+#    #+#             */
/*   Updated: 2022/03/22 19:04:06 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

typedef struct	s_intarr
{
	int	*stack_a;
	int	*stack_b;
	int	len_a;
	int	len_b;
}				t_intarr;

char	**ft_split(char const *s, char c);
int	ft_atoi(char *str, int index);
int	ft_isdigit(int c);
int	ft_isspace(int c);

#endif
