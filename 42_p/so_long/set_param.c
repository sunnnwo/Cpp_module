/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_param.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:15:55 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/26 23:47:07 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_param(t_param *par)
{
	par->fd = open("map/map.ber", O_RDONLY);
	if (par->fd <= 0)
		return ;
	par->map = NULL;
	par->count_e = 0;
	par->count_p = 0;
	par->count_c = 0;
	par->win_width = 0;
	par->win_height = 0;
	par->x = 0;
	par->y = 0;
	par->move = 0;
	par->p_x = 0;
	par->p_y = 0;
	par->mlx = mlx_init();
	par->g = mlx_xpm_file_to_image(par->mlx, "imgs/g.xpm", &par->wi, &par->he);
	par->w = mlx_xpm_file_to_image(par->mlx, "imgs/r.xpm", &par->wi, &par->he);
	par->c = mlx_xpm_file_to_image(par->mlx, "imgs/c.xpm", &par->wi, &par->he);
	par->e = mlx_xpm_file_to_image(par->mlx, "imgs/e.xpm", &par->wi, &par->he);
	par->p = mlx_xpm_file_to_image(par->mlx, "imgs/p.xpm", &par->wi, &par->he);
	par->win = NULL;
}
