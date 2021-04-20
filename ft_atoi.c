int		ft_atoi(const char *s)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (s[i] && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '
		|| s[i] == '\v' || s[i] == '\r' || s[i] == '\f'))
		i++;
	if (s[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = 10 * res + s[i] - '0';
		i++;
	}
	return (res * neg);
}