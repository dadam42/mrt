/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_minirt_screen_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:17:08 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/15 20:56:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_minirt_concepts.h"
#include <stdlib.h>

t_minirt_screen	*t_minirt_screen_new(int width, int height)
{
	t_minirt_screen *ret;

	if (!(width > 0 && height > 0))
		return (0);
	ret = malloc(sizeof(t_screen));
	if (ret)
	{
		if (t_minirt_screen_init(ret) == minirt_error)
		{
			free(ret);
			ret = 0;
		}
	}
	return (ret);
}

