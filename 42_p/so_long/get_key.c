/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:03:38 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/27 23:53:36 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_param *par)
{
	char	*c;

	if (keycode == KEY_W)
		move_up(par, par->p_y);
	else if (keycode == KEY_S)
		move_down(par, par -> p_y);
	else if (keycode == KEY_A)
		move_left(par, par -> p_y);
	else if (keycode == KEY_D)
		move_right(par, par -> p_y);
	else if (keycode == KEY_ESC)
		esc_press(keycode, par);
	write(1, "step: ", 6);
	c = ft_itoa(par->move);
	print_str(c);
	free(c);
	drawmap(par);
	return (0);
}

void	move_left(t_param *par, int y)
{
	t_mapline	*curline;
	char		*str;

	curline = par -> map;
	while (y-- != 0)
		curline = curline -> next;
	str = curline -> line;
	if (str[par->p_x - 1] == '1')
		return ;
	else if (str[par->p_x - 1] == 'E')
		if (get_e(par))
			return ;
	if (str[par->p_x - 1] == 'C')
		par -> count_c--;
	str[par->p_x - 1] = 'P';
	str[par->p_x] = '0';
	par -> move++;
	set_p(par);
}

void	move_right(t_param *par, int y)
{
	t_mapline	*curline;
	char		*str;

	curline = par -> map;
	while (y-- != 0)
		curline = curline -> next;
	str = curline -> line;
	if (str[par->p_x + 1] == '1')
		return ;
	else if (str[par->p_x + 1] == 'E')
		if (get_e(par))
			return ;
	if (str[par->p_x + 1] == 'C')
		par -> count_c--;
	str[par->p_x + 1] = 'P';
	str[par->p_x] = '0';
	par -> move++;
	set_p(par);
}

void	move_up(t_param *par, int y)
{
	t_mapline	*curline;
	char		*str;

	curline = par -> map;
	str = curline -> line;
	while (y != 0)
	{
		if (y == 1)
		{
			if (str[par->p_x] == '1')
				return ;
			else if (str[par->p_x] == 'E')
				if (get_e(par))
					return ;
			if (str[par->p_x] == 'C')
				par -> count_c--;
			str[par->p_x] = 'P';
		}
		curline = curline -> next;
		str = curline -> line;
		y--;
	}
	str[par->p_x] = '0';
	par -> move++;
	set_p(par);
}

void	move_down(t_param *par, int y)
{
	t_mapline	*curline;
	char		*str;
	char		*savestr;

	curline = par -> map;
	while (y != 0)
	{
		curline = curline -> next;
		y--;
	}
	savestr = curline -> line;
	curline = curline -> next;
	str = curline -> line;
	if (str[par -> p_x] == '1')
		return ;
	else if (str[par ->p_x] == 'E')
		if (get_e(par))
			return ;
	if (str[par -> p_x] == 'C')
		par -> count_c--;
	str[par->p_x] = 'P';
	savestr[par->p_x] = '0';
	par->move++;
	set_p(par);
}
