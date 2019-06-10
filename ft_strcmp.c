/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:27:15 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/10 11:48:02 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int diff;
	while ((unsigned char)*s1 == (unsigned char)*s2)
	{
		if (*s1 != '\0')
		{
			s1++;
			s2++;
		}	
	}
	if (*s1 != *s2)
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		return (diff);
	}
	else
	{
		return (0);
	}
}

