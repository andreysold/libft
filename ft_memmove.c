#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*b;
	size_t			j;

	j = 0;
	p = (unsigned char *) src;
	b = (unsigned char *) dst;
	if (p == NULL && b == NULL)
		return (NULL);
	if (b > p)
	{
		while (len-- > 0)
		{
			*(b + len) = *(p + len);
		}
	}
	else
	{
		while (j < len)
		{
			*b++ = *p++;
			j++;
		}
	}
	return (dst);
}
