/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 14:20:13 by antomart          #+#    #+#             */
/*   Updated: 2020/01/18 16:53:10 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int sign;
	long int res;

	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (!ft_isdigit(*str) && !ft_negsign(*str) &&
		!ft_possign(*str))
		return (0);
	if (ft_negsign(*str) && ft_isdigit(*(str + 1)))
	{
		sign = -1;
		str++;
	}
	else if (ft_possign(*str) && ft_isdigit(*(str + 1)))
		str++;
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (sign * res);
}
