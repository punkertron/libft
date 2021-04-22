#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*res;
	size_t			a;

	res = malloc(num * size);
	if (res == 0)
		return (NULL);
	a = 0;
	while (res[a])
	{
		res[a] = '\0';
		a++;
	}
	return (res);
}
