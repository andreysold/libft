#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*p;
	char		*b;
	size_t		i;

	i = 0;
	p = src;
	b = dst;
	if (p == NULL && b == NULL)
		return (NULL);
	while (i < n)
	{
		b[i] = p[i];
		i++;
	}
	return (dst);
}
