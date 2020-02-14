#ifndef CAT_3D_OBJECTS_H
# define CAT_3D_OBJECTS_H
# include "t_3d_vec.h"

typedef	enum				e_3d_type
{
	point, dir, line, plan, sphere, planar, cyl
}							t_3d_type;

typedef struct	s_3d_point	t_3d_point;
typedef	struct	s_3d_dir	t_3d_dir;
typedef struct	s_3d_line	t_3d_line;
typedef struct	s_3d_plan	t_3d_plan;

struct						s_3d_point
{
	t_3d_vec	coordonates;
};

struct						s_3d_dir
{
	t_3d_vec	coordonates;
};

struct						s_3d_line
{
	t_3d_point	origin;
	t_3d_dir	dir;
};

struct						s_3d_plan
{
	t_3d_point	origin;
	t_3d_dir	normal_dir;
};

#endif
