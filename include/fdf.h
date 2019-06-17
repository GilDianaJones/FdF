/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 16:18:59 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 15:47:50 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"
# include "../minilibx_macos/mlx.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <math.h>

# define WINDOW_X 1500
# define WINDOW_Y 1100
# define ESC 53
# define LEFT 123
# define RIGTH 124
# define UP 126
# define DOWN 125
# define W 13
# define A 0
# define S 1
# define D 2

typedef	struct	s_data
{
	void		*mlx_ptr;
	void		*mlx_win;
	void		*param;
	void		*mlx_img;
	char		*mlx_img_addr;
	int			bpp;
	int			size_line;
	int			endian;
	int			nb_pts;
	int			i;
	int			y_coef;
	int			x_coef;
	int			e;
	int			zer;
	float		*z_err;
	int			cnt_x;
	int			cnt_y;
	float		phi;
	int			dphi;
	int			wide;
	float		*z_coef;
	int			z_coeff;
	int			**tab_coor_x;
	int			**tab_coor_y;
	int			**vertex_tab;
	int			**iso_tab;
	int			**display_tab;
	int			x1;
	int			x2;
	int			y1;
	int			y2;
	int			z1;
	int			z2;
	int			dx;
	int			dz;
	int			i_zmax;
	int			i_zmin;
	int			z_max;
	int			z_min;
	int			delta_z;
	int			z_moy;
	int			col_up_pos;
	int			col_down_pos;
	int			col_up_pos_z;
	int			col_down_pos_z;
	int			col_up_neg;
	int			col_down_neg;
	int			col_up_neg_z;
	int			col_down_neg_z;
	int			nb_z;
	int			coord;
}				t_data;

void			fdf(int ***tab, int cnt_x, int cnt_y);
void			bresenham(t_data *data);
void			draw_pixel_black(int x1, int y1, t_data *data);
void			draw_dz_null(t_data *data, int coor);
void			draw_dz_sup_mix_pos_1(t_data *data, int coor);
void			draw_dz_sup_mix_pos_2(t_data *data, int coor);
void			draw_dz_inf_mix_pos_1(t_data *data, int coor);
void			draw_dz_inf_mix_pos_2(t_data *data, int coor);
void			draw_dz_sup_pos_1(t_data *data, int coor);
void			draw_dz_sup_pos_2(t_data *data, int coor);
void			draw_dz_inf_pos_1(t_data *data, int coor);
void			draw_dz_inf_pos_2(t_data *data, int coor);
void			draw_dz_sup_mix_neg_1(t_data *data, int coor);
void			draw_dz_sup_mix_neg_2(t_data *data, int coor);
void			draw_dz_inf_mix_neg_1(t_data *data, int coor);
void			draw_dz_inf_mix_neg_2(t_data *data, int coor);
void			draw_dz_sup_neg_1(t_data *data, int coor);
void			draw_dz_sup_neg_2(t_data *data, int coor);
void			draw_dz_inf_neg_1(t_data *data, int coor);
void			draw_dz_inf_neg_2(t_data *data, int coor);
void			draw_pixel(t_data *data);
void			init_lst(t_data *data, int cnt_x, int xnt_y);
void			init_vertex_tab(t_data *data, int **tab);
void			init_iso_tab(t_data *data);
void			init_display_tab(t_data *data);
void			exit_fdf(t_data *data);
void			seq_refresh(t_data *data);
int				key_hook(int keycode, t_data *data);
void			draw(t_data *data);
void			display_test(t_data *data, int **tab, int cnt_x, int cnt_y);
void			z_median(t_data *data);
void			val_min_max(t_data *data);
void			alloc_tabs(t_data *data);
void			straight_h(t_data *data, int dx, int dy);
void			straight_v(t_data *data, int dx, int dy);
void			quart_4_1(t_data *data, int dx, int dy, int e);
void			quart_4_2(t_data *data, int dx, int dy, int e);
void			quart_3_1(t_data *data, int dx, int dy, int e);
void			quart_3_2(t_data *data, int dx, int dy, int e);
void			quart_2_1(t_data *data, int dx, int dy, int e);
void			quart_2_2(t_data *data, int dx, int dy, int e);
void			quart_1_1(t_data *data, int dx, int dy, int e);
void			quart_1_2(t_data *data, int dx, int dy, int e);
void			wide_map(t_data *data);
int				expose_hook(t_data *data);
void			error(int n);
void			file_error(int nb, char *str);
void			erase_fdf(t_data *data);
void			free_tab(int ***tab, t_data *data);

#endif
