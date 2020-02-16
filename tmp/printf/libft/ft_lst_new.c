#include "libft.h"

t_list	*ft_lst_new(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
		new->content = content;
	return (new);
}
