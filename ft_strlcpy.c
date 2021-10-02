#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*p;
	char		*b;
	size_t		i;

	p = (char *)src;
	b = (char *)dst;
	i = 0;
	if (p == NULL || b == NULL)
		return (0);
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && *p != '\0')
	{
		*b++ = *p++;
		i++;
	}
	*b = '\0';
	return (ft_strlen(src));
}
