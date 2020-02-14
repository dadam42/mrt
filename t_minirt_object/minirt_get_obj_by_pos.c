#include "minirt_object.h"

t_minirt_object	*t_minirt_get_obj_by_pos(t_minirt *minirt, t_minirt_type type, size_t pos)
{
	if (pos < minirt->objs[type]->count)
		return (&((minirt->objs[type]).pobj[pos]));
	return (0);
}
