/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt_graph.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 17:36:21 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/15 17:53:47 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_GRAPH_H
# define MINIRT_GRAPH_H

typedef enum e_minirt_graph_type {minirt_plan, minirt_sphere} t_minirt_graph_type;
typedef	void*	t_minirt_plan;
typedef void*	t_minirt_sphere;
typedef	union	u__minirt_graph
{
	t_minirt_plan	plan;
	t_minirt_sphere	sphere;
}				t__minirt_graph;
typedef	struct	s_minirt_graph
{
	void	*graph;
		
}				t_minirt_graph;
#endif
