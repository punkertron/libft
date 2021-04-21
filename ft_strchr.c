#include "libft.h"

char	*ft_strchr(const char *str, int sym)
{
	char	*s;
	int		a;

	s = (char *) str;
	a = 0;
	while (s[a])
	{
		if (s[a] == sym)
			return (s + a);
		a++;
	}
	if (s[a] == sym)
		return (s + a);
	return (NULL);
}
