/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:34:31 by dodendaa          #+#    #+#             */
/*   Updated: 2019/05/20 14:59:43 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isalpha(int c)
{
	if((c > 65 && c < 90) || (c < 97 && c > 122))
	{
		return c;
	}
	else 
	{
		return(0);
	}
}
