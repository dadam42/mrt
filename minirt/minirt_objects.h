#ifndef MINIRT_OBJECTS_H
# define MINIRT_OBJECTS_H
typedef struct	s_minirt_object
{
	void *impl;
	float	(*get_intersect_line)()
}				t_minirt_object;

void	minirt_init_plan(t_minirt_object *obj, t_pos *pos, t_dir *dir)
{
	obj->impl =  malloc(sizeof(t_plan));
	if (obj->impl)
		t_pos_init
}


#ifndef
