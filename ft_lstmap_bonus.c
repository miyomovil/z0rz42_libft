/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:37:51 by antomart          #+#    #+#             */
/*   Updated: 2020/01/20 15:31:14 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *crawl;

	new = NULL;
	crawl = NULL;
	(void)del;
	if (lst)
	{
		if (!(new = malloc(sizeof(t_list))))
			return (NULL);
		new->content = f(lst->content);
		new->next = NULL;
		crawl = new;
		while (lst->next)
		{
			lst = lst->next;
			if (!((crawl->next) = malloc(sizeof(t_list))))
				return (ft_clear_lst(new, crawl, del));
			crawl = crawl->next;
			crawl->content = f(lst->content);
			crawl->next = NULL;
		}
	}
	return (new);
}
