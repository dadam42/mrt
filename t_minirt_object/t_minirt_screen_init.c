/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_minirt_screen_init.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:46:13 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/15 20:48:51 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_minirt_concepts.h"

t_minirt_com	*t_minirt_screen_init(t_minirt_screen *screen, int width, int height)
{
	if (!(width > 0 && height > 0))
		return (minirt_error);
	screen->matrix = malloc(sizeof(height * width));
	if (screen->matrix)
		return (minirt_ok);
	return (minirt_error);
}
