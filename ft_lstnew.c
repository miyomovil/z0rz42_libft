/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:38:25 by antomart          #+#    #+#             */
/*   Updated: 2020/01/18 09:18:16 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*link;

	if ((link = (t_list*)ft_memalloc(sizeof(t_list))) == NULL)
		return (NULL);
	link->content = (void*)content;
	link->next = NULL;
	return (link);
}
