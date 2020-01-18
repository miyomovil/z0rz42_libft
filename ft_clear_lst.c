/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:55:26 by antomart          #+#    #+#             */
/*   Updated: 2020/01/18 14:57:51 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_clear_lst(t_list *l, t_list *last, void (*del)(void *))
{
	t_list *next;

	next = NULL;
	while (l != last)
	{
		next = l->next;
		del(l->content);
		free(l);
		l = NULL;
		l = next;
	}
	del(l->content);
	free(l);
	return (l = NULL);
}
