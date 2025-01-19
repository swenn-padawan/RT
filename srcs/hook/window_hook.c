/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:19:58 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/18 14:21:41 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	window_hook(int event, void *params)
{
	t_mlx	*mlx;

	mlx = (t_mlx *)params;
	if (event == 0)
		mlx_loop_end(mlx->mlx);
}
