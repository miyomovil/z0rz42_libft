/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:05:12 by antomart          #+#    #+#             */
/*   Updated: 2020/01/13 16:03:49 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst1;
	const char	*src1;
	size_t		i;
	size_t		len;

	dst1 = dst;
	src1 = src;
	i = size;
	while (i-- != 0 && *dst1 != '\0')
		dst1++;
	len = dst1 - dst;
	i = size - len;
	if (i == 0)
		return (len + ft_strlen(src1));
	while (*src1 != '\0')
	{
		if (i != 1)
		{
			*dst1++ = *src1;
			i--;
		}
		src1++;
	}
	*dst1 = '\0';
	return (len + (src1 - src));
}
