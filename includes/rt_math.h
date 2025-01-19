/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:28:37 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/18 13:42:41 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_MATH_H
# define RT_MATH_H

typedef union	s_vec3
{
	struct
	{
		float	x;
		float	y;
		float	z;
	};
	float	vec[3];
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

#endif
