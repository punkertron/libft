#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*d1;
	size_t			a;

	s1 = (unsigned char *) src;
	d1 = (unsigned char *) dest;
	a = -1;
	if (d1 > s1)
		while (++a < n)
			d1[n - a - 1] = s1[n - a - 1];
	else
		while (++a < n)
			d1[a] = s1[a];
	return (d1);
}