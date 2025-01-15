/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme->fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:20:42 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 21:04:11 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hashmap.h>

int	compare_keys(void *key1, void *key2)
{
	return (!memcmp(key1, key2, sizeof(int) * 3));
}

void	check_key_dup(t_hashmap *hashmap, void *key, int *error)
{
	size_t	i;
	
	i = 0;
	while (i < hashmap->size
		&& compare_keys(key, (void *)hash(hashmap->entry[i].key)))
		i++;
	*error = !(i == hashmap->size);
}

unsigned int	find_index(t_hashmap *hashmap, unsigned int hash)
{
	unsigned int	index;
	unsigned int	i;

	index = hash;
	i = 1;
	while (hashmap->entry[i].key)
	{
		index = (hash + i * i) & MAX_SIZE - 1;
		i++;
	}
	return (index); 
}

