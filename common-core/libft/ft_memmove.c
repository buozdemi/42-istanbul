/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:24:45 by nkahrima          #+#    #+#             */
/*   Updated: 2022/01/03 17:46:40 by nkahrima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
//void	*ft_memmove(void *dst, const void *src, size_t len)

int main(){
	char str1[20]="abcabab";
	char str2[20]="abddddd";
	//memcpy(str1, str2, 10);
	memmove(str1, str2, 10);
	printf("%s\n", str1);
}
