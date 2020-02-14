#include "minirt_light_init.h"
#include "t_minirt_object.h"
#include <stdlib.h>

int	minirt_light_init(t_minirt_object *obj, void *info_struct)
{
	obj->model = malloc(sizeof(t_simple_light_model));
	obj->get_shadow = simple_light_model_shadow; 
}
