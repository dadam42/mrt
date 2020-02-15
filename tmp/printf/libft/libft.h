#ifndef LIBFT_H
# define LIBFT_H
typedef struct	s_list	t_list;
struct			s_list
{
	void	*content;
	t_list	*next;
};

t_list	*ft_lst_new(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
#endif
