/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:13:54 by shahkhan          #+#    #+#             */
/*   Updated: 2019/05/21 11:25:44 by shahkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d_len;
	size_t s_len;
	size_t i;

	d_len = (size_t)ft_strlen((char *)dst);
	s_len = (size_t)ft_strlen((char *)src);
	i = d_len;
	while ((*src) && ((d_len + 1) < size))
	{
		dst[d_len++] = *src++;
	}
	dst[d_len] = '\0';
	if (i > size)
		return (s_len + size);
	else
		return (s_len + i);
}
