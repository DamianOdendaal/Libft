/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:13:20 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/12 14:35:18 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
	size_t i;
	char *dup;

	i = 0;
	dup = (char *)s;
	if (n == 0)
		return;
	while (i < n)
		dup[i++] = 0;
}
