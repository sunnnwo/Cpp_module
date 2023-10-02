/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:36:49 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/28 00:10:09 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_param	par;
	int		mapstat;

	set_param(&par);
	if (par.fd <= 0)
	{
		write(1, "ErrorInvalidMapFile\n", 20);
		return (0);
	}
	copymap(&par);
	mapstat = check_map(&par);
	if (mapstat == 0)
	{
		write(1, "Error\n", 6);
		freemap(&par);
		exit(0);
		return (0);
	}
	set_p(&par);
	par.win = mlx_new_window(par.mlx, par.win_width, par.win_height, "so_long");
	drawmap(&par);
	mlx_key_hook(par.win, &key_press, &par);
	mlx_hook(par.win, PRESS_RED_BUTTON, 0, &redbut, &par);
	mlx_loop(par.mlx);
	return (0);
}
