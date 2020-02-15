#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	last;

	if (alst)
	{
		if (!(last = ft_lstlast(*alst)))
			*alst = new;
		last->next = new;
	}
}
