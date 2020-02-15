/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_minirt_concepts.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 17:57:32 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/15 22:59:46 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MINIRT_CONCEPTS_H
# define T_MINIRT_CONCEPTS_H
# include "t_3d_vec.h"

typedef	enum e_minirt_com {minirt_ok, minirt_error} t_minirt_com;
typedef enum	e_minirt_pcolor_comp {minirt_r, minirt_g, minirt_b}	t_minirt_pcolor_comp;
typedef t_3d_vec	t_minirt_pcolor;
typedef	unsigned char	t_minirt_rgb_color[3];
typedef	struct		t_minirt_plight
{
	t_minirt_pcolor	color;
	float			intensity;
}					t_minirt_plight;
typedef t_3d_vec	t_minirt_ray;
typedef	struct		s_minirt_ray_light
{
	t_minirt_ray	ray;
	t_minirt_plight	light;
}					t_minirt_ray_light;
typedef struct		s_minirt_screen
{
	int					width;
	int					height;
	t_minirt_pcolor		**matrix;
}					t_minirt_screen;
void				t_minirt_combine_plights(t_minirt_plight *l1, t_minirt_plight *l2
								, float a, t_minirt_plight *lr);
t_minirt_screen		*t_minirt_screen_new(int width, int height);
t_minirt_com		*t_minirt_screen_init(t_minirt_screen *screen
										, int width, int height);
void				t_minirt_screen_destroy(t_minirt_screen* screen);
#endif
