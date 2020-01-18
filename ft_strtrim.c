/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 12:34:49 by antomart          #+#    #+#             */
/*   Updated: 2020/01/14 15:24:00 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	nd;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	nd = ft_strlen(&s1[i]);
	if (nd != 0)
		while (s1[i + nd - 1]
				&& ft_strchr(set, s1[i + nd - 1]) != NULL)
			nd--;
	return (ft_substr(s1, i, nd));
}
