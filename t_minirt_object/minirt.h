#ifndef MINIRT_H
# define MINIRT_H
# include <stdlib.h>
# define MINIRT_COUNT_TYPE	4
# define MINIRT_ERROR		1
# define MINIRT_OK			0

typedef enum e_minirt_type {minirt_light, minirt_cam, minirt_graph, minirt_material}	t_minirt_type;
typedef void*	t_minirt_light;
typedef void*	t_minirt_cam;
typedef void*	t_minirt_graph;
typedef	void*	t_minirt_material;
typedef union	u_minirt_object
{
	t_minirt_light	light;
	t_minirt_cam	cam;
	t_minirt_graph	graph;
}				t_minirt_object;

typedef struct	s__minirt_objects	t__minirt_objects;

typedef struct s_minirt
{
	t__minirt_objects 	*objs;
}				t_minirt;

typedef	enum e_minirt_com {minirt_ok, minirt_error} t_minirt_com;
t_minirt_com	t_minirt_add_obj(t_minirt *minirt, t_minirt_type type, t_minirt_object *obj);
t_minirt_object	*t_minirt_get_obj_by_pos(t_minirt *minirt, t_minirt_type type, size_t pos);
t_minirt_com	t_minirt_init(t_minirt *minirt);
#endif
