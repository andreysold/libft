#include "libft.h"

static int	ft_search(char const c, char const *s)
{
	char			*p;
	unsigned long	j;

	p = (char *)s;
	j = 0;
	while (p[j] != '\0')
	{
		if (p[j] == c)
			return (4);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	char	*p;
	size_t	len;
	size_t	slen;

	i = 0;
	k = 0;
	if (s1 == NULL)
		return (0);
	len = ft_strlen(s1);
	while (i < len && ft_search(s1[i], set) != 0)
		i++;
	while (len > i && ft_search(s1[len - 1], set) != 0)
		len--;
	slen = len - i;
	p = (char *)malloc(sizeof(char) * (slen + 1));
	if (!p)
		return (NULL);
	while (k < slen)
	{
		p[k++] = s1[i++];
	}
	p[k] = '\0';
	return (p);
}
