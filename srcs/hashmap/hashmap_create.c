/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:15:50 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 19:47:20 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hashmap.h>

unsigned int	hash(int vec3[3])
{
	
	return (((vec3[0] ^ 7489)|(vec3[1] ^ 414)|(vec3[2] ^ 809)) & MAX_SIZE - 1);
}

void	hashmap_insert(t_hashmap *hashmap, t_object *obj, int *error, char *key)
{
	int	index;
	
	if (hashmap->size == MAX_SIZE)
	{
		*error = ERR_MAPFULL;
		return ;
	}
	index = hash(obj->vec.vec);
	hashmap->entry[index].key = key;
	hashmap->entry[index].value = obj;
	hashmap->size++;
}

void	*hashmap_get(t_hashmap *hashmap, char *key)
{
	size_t	i;

	i = 0;
	while (i < hashmap->size && hashmap->entry[i].key != key)
		i++;
	if (i == hashmap->size)
		return (NULL);
	return (&hashmap->entry[i].value);
}

void	hashmap_remove(t_hashmap *hashmap, char *key)
{
	size_t	i;

	i = 0;
	while (i < hashmap->size && hashmap->entry[i].key != key)
		i++;
	if (i == hashmap->size)
		return ;
	hashmap->entry[i].value = NULL;
	hashmap->entry[i].key = NULL;
}


