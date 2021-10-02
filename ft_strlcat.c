#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*p;
	char		*b;
	size_t		i;
	size_t		len;
	size_t		k;

	len = ft_strlen(src);
	i = 0;
	p = src;
	b = dst;
	k = 0;
	if (dstsize == 0)
		return (ft_strlen(p));
	while (b[i] && i < dstsize)
		i++;
	while ((i + k) < (dstsize - 1) && p[k])
	{
		b[i + k] = p[k];
		k++;
	}
	if (i + k < dstsize)
		b[i + k] = '\0';
	return (i + len);
}
