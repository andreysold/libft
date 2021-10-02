#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	b;
	size_t	i;

	b = (char)c;
	p = (char *)s;
	i = ft_strlen(p);
	if (b == '\0')
		return (p + i);
	while (i > 0)
	{
		i--;
		if (p[i] == b)
		{
			return (&p[i]);
		}
	}
	return (NULL);
}
