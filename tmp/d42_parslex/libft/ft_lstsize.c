#include "libft.h"

size_t	ft_lstsize(t_list *lst)
{
	size_t ret;

	ret = 0;
	if (lst)
	{
		while (lst)
		{
			lst = lst->next;
			ret++;
		}
	}
	return (ret);
}
