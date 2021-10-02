#include "libft.h" 

void	*ft_memccpy(void *dst,	const void *src, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*b;
	size_t			i;

	p = (unsigned char *)src;
	b = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		b[i] = p[i];
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
