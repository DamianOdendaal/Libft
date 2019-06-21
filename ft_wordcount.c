/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 14:58:16 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/21 16:39:22 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_wordcount(char *str, char delim)
{
	int i;
	int wordc;

	i = 0;
	wordc = 0;
	while (str[i])
	{
		while (str[i] == delim && str[i] != '\0')
			i++;
		while (str[i] != delim && str[i])
			i++;
		if(str[i] == delim)
			wordc++;
		if(str[i] == '\0')
			break;
	}
	return (wordc);
}

int	main()
{
	char a[] = "Hello     my  name  is     Damian  and  i  skate       ";
	printf("The number of words is %d \n", ft_wordcount(a,' '));
	return (0);
}


