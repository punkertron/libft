#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	unsigned char	*buf2;
	size_t			a;

	buf2 = (unsigned char *) buf;
	a = 0;
	while (a < n)
	{
		if (buf2[a] == c)
			return ((void *)buf + a);
		a++;
	}
	return (NULL);
}
