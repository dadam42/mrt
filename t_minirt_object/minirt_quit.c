/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt_quit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:21:13 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/15 17:31:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include <stdlib.h>

void t_minirt_quit(t_minirt *minirt)
{
	size_t	tdx;
	size_t	odx;

	tdx = 0;
	while (tdx < MINIRT_COUNT_TYPE)
	{
		odx = 0;
		while (odx < minirt->counts[tdx])
		{
			free(minirt->objs[tdx][odx]);
			odx++;
		}		
		cdx++;
	}
}
