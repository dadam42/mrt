#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
typedef struct	s_list	t_list;
struct			s_list
{
	void	*content;
	t_list	*next;
};

t_list	*ft_lst_new(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
size_t	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list* lst);
#endif
