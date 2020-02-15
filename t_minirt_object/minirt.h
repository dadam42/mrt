#ifndef MINIRT_H
# define MINIRT_H
# include <stdlib.h>
# include "t_minirt_concepts.h"
# include "minirt_cam.h"
# define MINIRT_COUNT_TYPE		4
# define MINIRT_BUFFS_COUNT		MINIRT_COUNT_TYPE
# define MINIRT_INC_BUFF		10

typedef enum e_minirt_type {minirt_light, minirt_cam, minirt_graph, minirt_material}	t_minirt_type;
typedef void*	t_minirt_light;
typedef struct	s_minirt_cam	t_minirt_cam;
typedef void	*t_minirt_graph;
typedef	void*	t_minirt_material;
typedef union	u_minirt_object
{
	t_minirt_light		light;
	t_minirt_cam		cam;
	t_minirt_graph		graph;
	t_minirt_material	material;
}				t_minirt_object;

typedef t_minirt_object	**t__minirt_objects[MINIRT_COUNT_TYPE];

typedef struct s_minirt	t_minirt;

struct s_minirt
{
	t__minirt_objects	objs;
	size_t				counts[MINIRT_BUFFS_COUNT];
	size_t				caps[MINIRT_BUFFS_COUNT];
};

t_minirt_com	t_minirt_add_obj(t_minirt *minirt, t_minirt_type type, t_minirt_object *obj);
t_minirt_object	*t_minirt_get_obj_by_pos(t_minirt *minirt, t_minirt_type type, size_t pos);
t_minirt_com	t_minirt_init(t_minirt *minirt);
void			t_minirt_quit(t_minirt *minirt);
t_minirt_screen	*t_minirt_raytrace(t_minirt *minirt, size_t pos);
#endif
