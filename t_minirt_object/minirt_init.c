#include "minirt.h"
#include "t__minirt_objects.h"

t_minirt_com	t_minirt_init(t_minirt *minirt)
{
	size_t	count;

	count = 0;
	while (count < MINIRT_COUNT_TYPE)
	{
		if (t__minirt_objects_init(&(minirt->objs[count])) == minirt_ok)
			count++;
		else
		{
			while (count > 0)
			{
				t__minirt_objects_release(&(minirt->objs[count]));
				count--;
			}
			return (minirt_error);
		}
	}
	return (minirt_ok);
}
