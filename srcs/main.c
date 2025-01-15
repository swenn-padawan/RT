/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:11:03 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 21:12:41 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include <hashmap.h>
#include <stdio.h>
#include <string.h>

void	print_type(int type)
{
	switch (type) {
		case SPHERE: printf("SPHERE\n");
		case PLANE: printf("PLANE\n");
		case CUBE: printf("CUBE\n");
		case TRIANGLE: printf("TRIANGLE\n");
		default: printf("Connais pas");
	}
}

int	main(int argc, char **argv)
{
	t_hashmap	hashmap;

	if (argc != 5)
		return (1);

}
