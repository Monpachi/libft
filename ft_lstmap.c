/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:48:15 by vchan             #+#    #+#             */
/*   Updated: 2021/12/14 15:45:33 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*tmp;
	t_list	*elem;

	if (lst)
	{
		tmp = lst;
		newlist = ft_lstnew((*f)(tmp->content));
		if (!newlist)
			return (NULL);
		tmp = tmp->next;
		while (tmp)
		{
			elem = ft_lstnew((*f)(tmp->content));
			if (!elem)
			{
				ft_lstclear(&newlist, del);
				return (NULL);
			}
			ft_lstadd_back(&newlist, elem);
			tmp = tmp->next;
		}
		return (newlist);
	}
	return (NULL);
}
