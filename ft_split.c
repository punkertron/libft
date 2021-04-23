#include "libft.h"

static	int	ft_count_letter(const char *s, const int a, char c)
{
	int	count;
	int	l;

	count = 0;
	l = a;
	while (s[l] && s[l] != c)
	{
		l++;
		count++;
	}
	return (count);
}

static	int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;	

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static	int	ft_equal(char *b, const char *s, int a, char c)
{
	int	l;

	l = 0;
	while (s[a] && s[a] != c)
		b[l++] = s[a++];
	b[l] = '\0';
	return (a);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	int		i;
	char	**b;

	b = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (b == 0)
		return (NULL);
	a = 0;
	i = 0;
	while (s[a] != '\0')
		if (s[a++] != c)
		{
			b[i] = malloc(sizeof(char) * (ft_count_letter(s, a, c) + 1));
			if (b[i] == 0)
			{
				free (b);
				return (NULL);
			}
			a = ft_equal(b[i++], s, a, c);
			continue ;
		}
	b[i] = NULL;
	return (b);
}
