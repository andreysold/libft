#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*b;
	size_t				i;

	i = 0;
	p = s1;
	b = s2;
	while (i < n)
	{
		if (p[i] != b[i])
		{
			return (p[i] - b[i]);
		}
		i++;
	}
	return (0);
}
