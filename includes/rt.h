/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:00:56 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/15 16:32:23 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H

#include <stdint.h>

typedef union	s_vec3
{
	struct
	{
		int	x;
		int	y;
		int	z;
	};
	int	vec[3];
}	t_vec3;

typedef union	s_vec4
{
	struct
	{
		int	x;
		int	y;
		int	z;
		int	w;
	};
	int	vec[4];
}	t_vec4;

typedef struct	s_texture
{
	unsigned char	*data;
	uint32_t		width;
	uint32_t		height;
	uint8_t			channels;

}	t_texture;

typedef union	s_color
{
	struct
	{
		uint8_t	a;
		uint8_t	r;
		uint8_t	g;
		uint8_t	b;
	};
	uint8_t	argb[4];
}	t_color;

typedef struct	s_material
{
	float		reflection;
	float		refraction;
	float		shininess;
	t_color		color;
	t_texture	texture;
}	t_material;

enum	e_object_type
{
	SPHERE,
	PLANE,
	CUBE,
	TRIANGLE
};

typedef struct	s_object
{
	char				*key;
	enum e_object_type	type;
		t_vec3			vec;
		t_material		material;
		void			*spe_data;
}	t_object;

#endif
