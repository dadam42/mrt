/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt_cam.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:57:16 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/15 22:59:46 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_CAM_H
# define MINIRT_CAM_H
# include "t_3d_vec.h"
# include "minirt.h"
# include "t_minirt_concepts.h"

struct s_minirt_cam
{
	void			*minirt;
	t_3d_vec		pos;
	t_3d_vec		dir_view;
	t_3d_vec		dir_up;
	float			foc;
	int				width;
	int				height;
	t_minirt_pcolor	**screen;
};


#endif
