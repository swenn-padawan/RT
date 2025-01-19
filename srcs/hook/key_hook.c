/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:08:02 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/18 14:17:25 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include <SDL2/SDL_scancode.h>

void	key_hook(int key, void *params)
{
	t_mlx	*mlx;

	mlx = (t_mlx *)params;
	if (key == SDL_SCANCODE_ESCAPE)
		mlx_loop_end(mlx->mlx);
}
