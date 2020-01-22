/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 13:36:55 by antomart          #+#    #+#             */
/*   Updated: 2020/01/20 14:17:34 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp2 = *lst;
	while (tmp2 != NULL)
	{
		tmp = tmp2->next;
		ft_lstdelone(tmp2, del);
		tmp2 = tmp;
	}
	*lst = NULL;
}
