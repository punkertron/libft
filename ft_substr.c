#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	a;

	a = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	dest = malloc(len * sizeof(char *) + 1);
	if (dest == 0)
		return (NULL);
	while (s[a] && a < len)
	{
		dest[a] = s[start];
		a++;
		start++;
	}
	dest[a] = '\0';
	return (dest);
}
