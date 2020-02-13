#ifndef 3D_OBJECT_H
# define 3D_OBJECT_H

typedef	struct	s_3d_pos
{
	t_3d_matrix	
}				t_pos;

typedef	struct	s_3d_dir
{
	t_pos dir;
	float	*cached_sqnorm;
	float	*cached_norm;
}				t_dir;
typedef struct	s_plan
{
	t_pos	pos;
	t_dir	dir;
}				t_plan;

typedef	struct	s_line
{
	t_pos	pos;
	t_dir	dir;
}				t_line;

void	t_pos_init(t_pos *pos, float x, float y, float z)
{
	pos->x = x;
	pos->y = y;
	pos->z = z;
}

void (*t_dir_init)(t_dir *, float, float, float) = t_pos_init;

void	t_plan_init(t_plan *plan, t_pos *pos, t_dir *dir)
{
	memcpy(&plan->pos, pos, sizeof(t_pos));
	memcpy(&plan->dir, dir, sizeof(t_dir));
}

void	(*t_line_init)(t_line *, t_pos *, t_dir *) = t_plan_init;

#endif
