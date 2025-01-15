/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:11:03 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 20:11:47 by stetrel          ###   ########.fr       */
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

void	print_hashmap(t_hashmap *hashmap)
{
	size_t	i = 0;
	while (i < hashmap->size)
	{
		t_object *obj = (t_object*)hashmap->entry[i].value;
		print_type(obj->type);
		printf("key = %s\n", hashmap->entry[i].key);
		i++;
	}
}



int	main(int argc, char **argv)
{
	t_hashmap	hashmap;

	if (argc != 5)
		return (1);
	//faut creer les objets
}
