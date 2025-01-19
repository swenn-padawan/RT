/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:11:03 by stetrel           #+#    #+#             */
/*   Updated: 2025/01/19 14:42:02 by stetrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <stdlib.h>

void	cleanup(t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->win);
	mlx_destroy_context(mlx->mlx);
}

void	get_info(t_mlx *mlx)
{
	ft_memset(&mlx->info, 0, sizeof(mlx_window_create_info));
	mlx->info.title = "Petit traceur de rayons";
	mlx->info.width = 500;
	mlx->info.height = 500;
}

int	main(int argc, char **argv)
{
	//t_mlx	mlx;

	(void)argc;
	(void)argv;
	//mlx.mlx = mlx_init();
	//get_info(&mlx);

	int error = 0;
	file_parsing(argv[1], &error);
	if (error)
		error_message(error);
	//mlx.win = mlx_new_window(mlx.mlx, &mlx.info);
	//mlx_on_event(mlx.mlx, mlx.win, MLX_KEYDOWN, key_hook, &mlx);
	//mlx_on_event(mlx.mlx, mlx.win, MLX_WINDOW_EVENT, window_hook, &mlx);
	//mlx_loop(mlx.mlx);
	//cleanup(&mlx);
}
