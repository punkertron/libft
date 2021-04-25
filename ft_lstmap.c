#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ptr;
	t_list *first;

	if (!lst || !f || !del)
		return (NULL);
	ptr = ft_lstnew((*f)(lst->content));
	if (ptr == 0)
		return (NULL);
	first = ptr;
	lst = lst->next;
	while (lst)
	{
		ptr->next = ft_lstnew((*f)(lst->content));
		if (!ptr->next)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ptr = ptr->next;
		lst = lst->next;
	}
	ptr->next = NULL;
	return (first);
}
