#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				min;
	unsigned int	res;
	char			*p;

	p = (char *) str;
	i = 0;
	min = 1;
	res = 0;
	while ((p[i] >= 0x09 && p[i] <= 0x0D) || (p[i] == ' '))
		i++;
	if (p[i] == '-')
		min *= -1;
	if (p[i] == '-' || p[i] == '+')
		i++;
	while (p[i] >= '0' && p[i] <= '9')
	{
		res = (res * 10) + (p[i] - '0');
		i++;
	}
	if (res > 2147483648 && min == -1)
		return (0);
	if (res > INT_MAX && min == 1)
		return (-1);
	return (min * res);
}
