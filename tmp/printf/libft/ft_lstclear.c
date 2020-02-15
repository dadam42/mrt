#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list *tmp;

	if (lst)
	{
		while (*lst && **lst)
		{
			del(lst->content);
			tmp = *lst;
			(*lst) = (*lst)->next;
			free(tmp);
		}
	}
}
