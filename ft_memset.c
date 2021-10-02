#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = dest;
	i = 0;
	while (i < len)
	{
		*p++ = (unsigned char)c;
		i++;
	}
	return (dest);
}
