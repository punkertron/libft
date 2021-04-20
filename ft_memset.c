#include "libft.h"

void	*ft_memset(void *dest, int val, size_t n)
{
	unsigned char	*str;
	size_t			a;

	str = (unsigned char *) dest;
	a = 0;
	while (a < n)
	{
		str[a] = val;
		a++;
	}
	return (str);
}