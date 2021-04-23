#include "libft.h"

static	int	ft_check(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		a;
	int		l;

	a = 0;
	l = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dest == 0)
		return (NULL);
	while (s1 && ft_check(s1[a], set) == 1)
		a++;
	while (s1[a])
	{
		dest[l] = s1[a];
		a++;
		l++;
	}
	while (l > 0 && ft_check(dest[l - 1], set) == 1)
	{
		l--;
	}
	dest[l] = '\0';
	return (dest);
}
