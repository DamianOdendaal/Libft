/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:43:34 by shahkhan          #+#    #+#             */
/*   Updated: 2019/05/22 10:51:43 by shahkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int neg;
	int num;
	int lng;

	neg = 1;
	num = 0;
	lng = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\v') ||
			(*str == '\f') || (*str == '\r') || (*str == '\n'))
	{
		str++;
	}
	while (ft_isdigit(*str))
	{
		num = ((num * 10) + (int)*str - '0');
		str++;
		lng++;
	}
	if (lng > 19)
	{
		return ((num == -1) ? 0 : -1);
	}
	return (num * neg);
}
