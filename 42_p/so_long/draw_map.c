/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:27:31 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/26 23:51:22 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	drawmap(t_param *par)
{
	t_mapline	*curline;
	char		*str;
	int			x;
	int			y;

	x = 0;
	y = 0;
	mlx_clear_window(par->mlx, par -> win);
	curline = par -> map;
	while (curline)
	{
		str = curline -> line;
		while (*str != '\n')
		{
			draw_ing(*str, par, x, y);
			str++;
			x += par -> wi;
		}
		curline = curline -> next;
		x = 0;
		y += par -> he;
	}
	return (0);
}

void	draw_ing(char a, t_param *par, int x, int y)
{
	if (a == '0')
		mlx_put_image_to_window(par->mlx, par->win, par-> g, x, y);
	else if (a == '1')
	{
		mlx_put_image_to_window(par->mlx, par->win, par->g, x, y);
		mlx_put_image_to_window(par->mlx, par->win, par->w, x, y);
	}
	else if (a == 'P' || a == 'C' || a == 'E')
	{
		mlx_put_image_to_window(par->mlx, par->win, par->g, x, y);
		if (a == 'P')
			mlx_put_image_to_window(par->mlx, par->win, par->p, x, y);
		else if (a == 'C')
			mlx_put_image_to_window(par->mlx, par->win, par->c, x, y);
		else if (a == 'E')
			mlx_put_image_to_window(par->mlx, par->win, par->e, x, y);
	}
}
