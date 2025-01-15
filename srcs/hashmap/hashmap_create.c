/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:15:50 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 21:12:17 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hashmap.h>

uint64_t	hash(int vec3[3])
{
	return (((vec3[0] * 73856093)
		^ (vec3[1] * 19349663) ^ (vec3[2] * 83492791)) & MAX_SIZE - 1);
}

void	hashmap_insert(t_hashmap *hashmap, t_object *obj, int *error, char *key)
{
	int	index;
	
	if (hashmap->size == MAX_SIZE)
	{
		*error = ERR_MAPFULL;
		return ;
	}
	check_key_dup(hashmap, key, error);
	if (*error)
		return ;
	index = hash(obj->vec.vec);
	if (hashmap->entry[index].key)
		index = find_index(hashmap, index);
	hashmap->entry[index].key = key;
	hashmap->entry[index].value = obj;
	hashmap->size++;
}

void	*hashmap_get(t_hashmap *hashmap, int key[3])
{
	size_t		i;
	uint64_t	index;

	i = 0;
	index = hash(key);
	while (i < hashmap->size && compare_keys((void *)index, (void*)hash(hashmap->entry[i].key)))
		i++;
	if (i == hashmap->size)
		return (NULL);
	return (&hashmap->entry[i].value);
}

void	hashmap_remove(t_hashmap *hashmap, void *key)
{
	size_t		i;
	uint64_t	index;

	i = 0;
	index = 0;
	while (index < hashmap->size && compare_keys((void *)hash(key), (void *)hash(hashmap->entry[i].key)))
		index = (index + 1) & MAX_SIZE - 1;
	if (i == hashmap->size)
		return ;
	hashmap->entry[i].value = NULL;
	hashmap->entry[i].key = NULL;
}
