#ifndef MINIRT_OBJECT_H
# define MINIRT_OBJECT_H
# define MINIRT_COUNT_TYPE 3

typedef enum e_minirt_type {light, cam, graph}	t_minirt_type;
typedef void*	t_minirt_light;
typedef void*	t_minirt_cam;
typedef void*	t_minirt_graph;
typedef union	u_minirt_object
{
	t_minirt_light	light;
	t_minirt_cam	cam;
	t_minirt_graph	graph;
}				t_minirt_object;

typedef struct	s__minirt_objects
{
	t_minirt_object	*pobj;
	size_t			count;
	size_t			cap;
}				t__minirt_objects;

typedef struct s_minirt
{
	t__minirt_objects 	objs[MINRT_COUNT_TYPE];
}				t_minirt;

void			t_minirt_add_obj(t_minirt_type type, t_minirt_object *obj);
t_minirt_object	*t_minirt_get_obj_by_pos(t_minrt *minirt, t_minirt_type type, size_t pos);

#endif
