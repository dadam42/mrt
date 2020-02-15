#include "minirt_init.h"

t_minirt_com	t_minirt_init(t_minirt *minirt)
{
	t_minirt_init_tab*	tab[2];
	size_t				idx;
	size_t				tdx;

	tab[0] = &minirt->counts;
	tab[1] = &minirt->caps;
	idx = 0;
	tdx = 0;
	while (tdx < 2)
	{
		while (idx < MINIRT_BUFFS_COUNT)
		{
			(*tab[tdx])[idx] = 0;
			idx++;
		}
		tdx++;
	}
	return (minirt_ok);
}
