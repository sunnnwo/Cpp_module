/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:20:15 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/27 23:37:57 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_p(t_param *par)
{
	t_mapline	*curline;
	char		*str;

	curline = par -> map;
	par -> p_x = 0;
	par -> p_y = 0;
	while (curline)
	{
		str = curline -> line;
		while (*str != '\n')
		{
			if (*str == 'P')
				return ;
			str++;
			par -> p_x++;
		}
		curline = curline -> next;
		par -> p_x = 0;
		par -> p_y++;
	}
}

int	get_e(t_param *par)
{
	char	*c;

	if (par -> count_c == 0)
	{
		c = ft_itoa(par->move++);
		write(1, "Game finished step:", 19);
		print_str(c);
		system("leaks so_long");
		freemap(par);
		system("leaks so_long");
		exit(0);
		return (0);
	}
	else
		return (1);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
