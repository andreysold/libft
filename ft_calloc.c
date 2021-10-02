#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (count * size));
	if (!p)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
