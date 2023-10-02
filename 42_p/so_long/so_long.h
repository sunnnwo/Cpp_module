/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunwookim <sun-wkim@student.42lausanne.ch> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:39:57 by sunwookim         #+#    #+#             */
/*   Updated: 2023/07/27 23:55:25 by sunwookim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>
# include "mlx/mlx.h"
# include "GNL/get_next_line.h"

# define KEY_ESC			53
# define KEY_W				13
# define KEY_S				1
# define KEY_A				0
# define KEY_D				2
# define PRESS_RED_BUTTON	17

typedef struct s_param		t_param;
typedef struct s_mapline	t_mapline;

struct s_mapline
{
	char				*line;
	struct s_mapline	*next;
};
struct s_param
{
	void		*mlx;
	void		*par;
	void		*win;
	void		*p;
	void		*g;
	void		*w;
	void		*c;
	void		*e;
	t_mapline	*map;
	int			fd;
	int			x;
	int			y;
	int			wi;
	int			he;
	int			win_width;
	int			win_height;
	int			move;
	int			p_x;
	int			p_y;
	int			count_e;
	int			count_p;
	int			count_c;
};

void	move_up(t_param *par, int y);
void	move_down(t_param *par, int y);
void	move_right(t_param *par, int y);
void	move_left(t_param *par, int y);
void	set_param(t_param *par);
void	set_p(t_param *par);
void	freemap(t_param *par);
void	draw_ing(char a, t_param *par, int x, int y);
void	print_str(char *str);
int		copymap(t_param *par);
int		copyline(char *str, t_param *par);
int		check_map(t_param *par);
int		check_line_len(t_param *par);
int		check_wall(t_param *par, int linenum);
int		check_map_char(t_param *par);
int		check_wall_end(char *str);
int		print_err(char *str);
int		drawmap(t_param *par);
int		key_press(int keycode, t_param *par);
int		get_e(t_param *par);
int		esc_press(int keycode, t_param *par);
int		redbut(t_param *par);
char	*ft_itoa(unsigned int nb);

#endif
