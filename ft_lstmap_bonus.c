/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:16:51 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/09/19 18:13:44 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mylist;

	while (lst->next != NULL)
	{
		mylist = ft_lstnew(f(lst->content));
		if (mylist == NULL)
		{
			ft_lstclear(&mylist, del);
		}
		mylist = mylist->next;
		lst = lst->next;
	}
	return (mylist);
}
