#include "minirt_object.h"

t_minirt_com	t_minirt_add_obj(t_minirt *minirt, t_minirt_type type, t_minirt_object *obj)
{		
	t_minirt_object *tmp;

	if (minirt->counts[type] == minirt->caps[type])
	{
		tmp = malloc(sizeof(t_minirt_object*)
					* (minirt->counts[type] + MINIRT_INC_BUF));
		if (!tmp)
			return (minirt_error);
		ft_memcpy(tmp, minirt->objs[type]
					, sizeof(t_minirt_object*) * minirt->counts[type]);
		free(minirt->objs[type]);
		minirt->objs[type] = tmp;
		minirt->caps[type] += MINIRT_INC_BUF;
	}
	obj->minirt;
	minirt->objs[type][minirt->count[type]] = obj;
	minirt->counts[type]++;
	return (minirt_ok);	
}
