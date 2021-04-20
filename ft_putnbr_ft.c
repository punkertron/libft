#include "libft.h"

static	void	ft_swap_str(char *str)
{
	int	l;
	int q;
	char c;

	l = ft_strlen(str);
	q = -1;
	while (++q < --l)
	{
		c = str[q];
		str[q] = str[l];
		str[l] = c;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int				a;
	long long int	q;
	char			s[10];

	q = (long long int) n;
	if (q < 0)
	{
		ft_putchar_fd('-', fd);
		q = -q;
	}
	a = 0;
	s[a] = q % 10 + '0';
	q = q / 10;
	while (q != 0)
	{
		s[++a] = q % 10 + '0';
		q = q / 10;
	}
	s[a + 1] = '\0';
	ft_swap_str(s);
	ft_putstr_fd(s, fd);
}