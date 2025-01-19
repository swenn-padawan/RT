/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:00:56 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/19 14:03:51 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H

# include "../Lib/Libft/include/libft.h"
# include "../Lib/Libft/include/get_next_line.h"
# include "../Lib/Macro/includes/mlx.h"
# include "../Lib/Macro/includes/mlx_extended.h"
# include "rt_math.h"
# include "color.h"
# include "objects.h"
# include "parsing.h"
# include "hook.h"
# include <stdint.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <math.h>

typedef struct	s_mlx
{
	mlx_context				mlx;
	mlx_window_create_info	info;
	mlx_window				win;
}	t_mlx;

#endif
