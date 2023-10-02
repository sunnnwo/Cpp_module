/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:59:39 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/28 10:54:22 by sun-wkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	copymap(t_param *par)
{
	char	*str;

	str = get_next_line(par->fd);
	while (str != NULL)
	{
		copyline(str, par);
		free(str);
		str = get_next_line(par->fd);
	}
	free (str);
	return (1);
}

int	copyline(char *str, t_param *par)
{
	t_mapline	*line;
	t_mapline	*currline;

	currline = par->map;
	line = malloc(sizeof(t_mapline));
	if (!line)
	{
		freemap(par);
		return (0);
	}
	line->next = NULL;
	line->line = ft_strdup(str);
	if (par->map == NULL)
		par->map = line;
	else
	{
		while (currline->next != NULL)
			currline = currline->next;
		currline->next = line;
	}
	return (1);
}

void	freemap(t_param *par)
{
	t_mapline	*currline;
	t_mapline	*nextline;

	currline = par->map;
	while (currline)
	{
		nextline = currline->next;
		free (currline->line);
		free (currline);
		currline = nextline;
	}
	free (currline);
}
