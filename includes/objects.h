/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:30:48 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/19 11:43:35 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECTS_H
# define OBJECTS_H

#include "rt.h"

#define MAX_OBJECTS 64

enum	e_object_type
{
	AMBIENT,
	CAMERA,
	LIGHT,
	SPHERE,
	PLANE,
	CYLINDER
};

typedef t_vec3	t_coord;

//struct array for all the objects
typedef struct	t_objects
{
	uint8_t	type;
	t_coord	coord;
	float	diameter;
	float	heigth;
	float	axis;
	t_color	color;
	float	fov_degrees;
	float	brightness;
	t_vec3	orientaition;
}	t_objects;

#endif
