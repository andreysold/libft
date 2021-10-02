#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*p;
	unsigned long	i;

	p = (char *)s;
	i = 0;
	while (p[i] != (char)c)
	{
		if (p[i] == '\0')
			return (NULL);
		i++;
	}
	return (&p[i]);
}
