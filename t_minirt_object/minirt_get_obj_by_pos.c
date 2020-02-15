#include "minirt.h"

t_minirt_object	*t_minirt_get_obj_by_pos(t_minirt *minirt, t_minirt_type type, size_t pos)
{
	if (minirt->counts[type] > pos)
		return (minirt->objs[type][pos]);
	return (0);
}
