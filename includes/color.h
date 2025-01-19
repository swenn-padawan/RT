/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:36:28 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/18 13:53:55 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef COLOR_H
# define COLOR_H

#include "rt.h"

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

#endif
