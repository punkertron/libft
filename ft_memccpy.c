#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
		if (((unsigned char *)src)[a] == c)
			return (dest);
		a++;
	}
	return (dest);
}
