#include "t_minirt_object.h"

int	minirt_init_object(t_minirt_object *obj
						, t_minirt_object_type type
						, void *init_struct)
{
	static t_minirt_init_object init[] = {minirt_light_init, minirt_cam_init, minirt_geom_init};

	obj->impl = init_struct;
	return (init[type](obj));
}

int	minirt_cam_init(t_minirt_object *obj)
{
	
}
