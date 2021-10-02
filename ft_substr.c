#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*p;
	size_t	i;

	p = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	if (s == NULL)
		return (0);
	while (len-- > 0)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
