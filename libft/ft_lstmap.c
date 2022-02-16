/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkahrima <nkahrima@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:15:33 by nkahrima          #+#    #+#             */
/*   Updated: 2022/02/03 18:58:00 by nkahrima         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	newlist = 0;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			del(lst->content);
			return (temp);
		}
		lst = lst->next;
		ft_lstadd_back(&newlist, temp);
	}
	return (newlist);
}
#include <stdio.h>
void	*f(void *a)
{
	return ((void *)ft_itoa(42));
}

void del(void *a)
{
	free(a);
}

int main(){
	t_list *a;
	t_list *temp;
	a = ft_lstnew(ft_strdup("cagla"));
	a = ft_lstmap(a, f, &del);	
	printf("%s\n", a->content);
}
