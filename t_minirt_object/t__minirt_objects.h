#ifndef T__MINRT_OBJECTS_H
# define T__MINIRT_OBJECTS_H
# include "minirt.h"

struct	s__minirt_objects
{
	t_minirt_object	*pobj;
	size_t			count;
	size_t			cap;
};

t_minirt_com	t__minirt_objects_init(t__minirt_objects *objs);
void			t__minirt_objects_release(t__minirt_objects *objs);
#endif
