/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme->fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:20:42 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 20:29:11 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <hashmap.h>

void	check_key_dup(t_hashmap *hashmap, char *key, int *error)
{
	size_t	i;

	i = 0;
	while (i < hashmap->size && strcmp(hashmap->entry[i].key, key))
		i++;
	*error = !(i == hashmap->size);
}
