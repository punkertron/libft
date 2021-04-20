#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*dest;
	
	a = 0;
	if (!s)
		return (NULL);
	dest = ft_strdup(s);
	if (dest == 0)
		return (NULL);
	while (dest[a])
	{
		dest[a] = (*f)(a, s[a]);
		a++;
	}
	return (dest);
}