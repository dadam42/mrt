#ifndef T_MINIRT_OBJECT_H
# define T_MINIRT_OBJECT_H
# include "cat_3d_objects.h"
# include "t_minirt_geom_object.h"

typedef	struct	s_minirt_color
{
	t_3d_vec	*rgb;
	float		intensity;
}				t_minirt_color;

typedef enum	e_minirt_object_type
{
	light, cam, geom
}				t_minirt_object_type;

typedef struct	s_minirt_light
{
	void		*model;
	t_minirt_color		*(*get_shadow)(struct s_minirt_light*, t_3d_point *pos, void *scene);
}				t_minirt_light;

typedef	struct	s_minirt_cam
{
	t_3d_point	*pos;
	t_3d_dir	*view_dir;
	t_3d_dir	*up_dir;
	float		foc;
}				t_minirt_cam;

typedef	struct	s_minirt_geom
{
	void	*model;
	t_minirt_color	(*get_color)(t_3d_point *, int, void *);
}				t_minirt_geom;

typedef struct	s_minirt_object t_minirt_object;

typedef	int		(*t_minirt_init_object)(t_minirt_object*);
void			minirt_init_object(t_minirt_object *obj
									, t_minirt_object_type type
									, void *init_struct);

int				minirt_light_init(t_minirt_object *obj);
int				minirt_cam_init(t_minirt_object *obj);
int				minirt_geom_init(t_minirt_object *obj);
#endif
