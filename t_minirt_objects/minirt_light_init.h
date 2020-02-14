#ifndef MINIRT_LIGHT_INIT
# define MINIRT_LIGHT_INIT
# include "t_minirt_object.h"

typedef struct	s_simple_light_model
{
	t_3d_point	*pos;
	t_3d_dir	*dir;
	float		foc;	
}				t_simple_light_model;

t_color			*simple_light_model_shadow(t_minirt_light *light
											, t_3d_point *pos, void *scene);
#endif
