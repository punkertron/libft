#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*last;

	if (lst)
	{
		ptr = *lst;
		while (ptr != NULL)
		{
			last = ptr->next;
			ft_lstdelone(ptr, del);
			ptr = last;
		}
		*lst = NULL;
	}
}
