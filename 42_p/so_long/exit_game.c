/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:01:12 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/28 00:08:34 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	esc_press(int keycode, t_param *par)
{
	if (keycode == KEY_ESC)
	{
		write(1, "press ESC BUTTON", 16);
		freemap(par);
		exit(0);
	}
	return (0);
}

int	redbut(t_param *par)
{
	write(1, "press red button", 16);
	freemap(par);
	exit(0);
	return (0);
}

int	print_err(char *str)
{
	int	i;

	i = ft_strlen(str);
	write(1, str, i);
	return (0);
}

int	check_wall_end(char *str)
{
	while (*str != '\n')
	{
		if (*str != '1')
			return (print_err("Not all 1"));
		str++;
	}
	return (1);
}
