#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	char	*s;
	int		l;

	s = (char *) str;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == sym)
			return (s + l);
		l--;
	}
	return (NULL);
}