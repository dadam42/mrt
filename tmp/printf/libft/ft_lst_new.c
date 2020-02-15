#include "libft.h"

t_list	*ft_lst_new(void *content)
{
	t_list *new;

	new = malloc(sizeof(list_t))
	if (new)
		new->content = content;
	return (new);
}
