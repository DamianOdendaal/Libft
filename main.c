/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:57:57 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/10 16:55:24 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
//	char array[5];  array notation
	char array[] = "hello";  // Automatic assigning and size calculation and termination

	printf("Array notation:\n");
	printf("%s\n", array);
	printf("%c\n", array[0]);
	printf("%c\n", array[1]);
	printf("%c\n", array[2]);
	printf("%c\n", array[3]);
	printf("%c\n", array[4]);
	printf("%c\n", array[5]);

	int m = 5;
	int n = 5;
 	int *p1 = &m; // pointer notation
 	int *p2 = &n; // pointer notation
	int *p3;

	p3 = p2 - p1;
	/* printf("pointer notation\n"); */
	/* printf("%s\n", ptr); */
	/* printf("%c	", *(ptr + 0)); */
	/* printf("%p\n", (ptr + 0)); */
	/* printf("%c	", *(ptr + 1)); */
	/* printf("%p\n", (ptr + 1)); */
	/* printf("%c	", *(ptr + 2)); */
	/* printf("%p \n", (ptr + 2)); */
	/* printf("%c	", *(ptr + 3)); */
	/* printf("%p\n", (ptr + 3)); */
	/* printf("%c	", *(ptr + 4)); */
	/* printf("%p\n", (ptr + 4)); */
	/* printf("%c	", *(ptr + 5)); */
	

	printf("%x\n", p1);
	printf("%x\n", p2);
	printf("%d\n", p3);
	return (0);
}
