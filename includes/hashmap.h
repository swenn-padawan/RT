/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:11:29 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 19:53:31 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H
# define HASHMAP_H

#define MAX_SIZE 100

#include <rt.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

enum	e_error_map
{
	ERR_MAPFULL = 1
};

typedef struct	s_entry
{
	char	*key;
	void	*value;
}	t_entry;

typedef struct	s_hashmap
{
	t_entry	entry[MAX_SIZE];
	size_t	size;
}	t_hashmap;

unsigned int	hash(int vec3[3]);
void	hashmap_insert(t_hashmap *hashmap, t_object *obj, int *error, char *key);
void	*hashmap_get(t_hashmap *hashmap, char *key);
void	hashmap_remove(t_hashmap *hashmap, char *key);


#endif
