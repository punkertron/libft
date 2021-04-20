#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = -1;
	while (s1[++i]);
	return (i);
}