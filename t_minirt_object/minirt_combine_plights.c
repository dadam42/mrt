#include "t_minirt_concepts.h"
#include "t_3d_vec.h"

void	t_minirt_combine_plights(t_minirt_plight *l1, t_minirt_plight *l2
								, float a, t_minirt_plight *lr)
{
	static	t_minirt_pcolor mems[2];
	
	lr->intensity = l1->intensity + a * l2->intensity;
	t_3d_vec_combine(l1->intensity, l1->color, mems[0], mems[1]);
	t_3d_vec_combine(a * l2->intensity, l2->color, mems[1], lr->color);
}
