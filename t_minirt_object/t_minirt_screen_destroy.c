/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_minirt_screen_destroy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:49:34 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/15 20:51:22 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_mirt_concepts"

void	t_minirt_screen_destroy(t_minirt_screen *screen)
{
	free(screen->matrix);
	free(screen);
}
