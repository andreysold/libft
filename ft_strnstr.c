#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == 0 && *haystack == 0)
		return ((void *) haystack);
	if (ft_strlen(needle) == 0 && ft_strlen(haystack) != 0)
		return ((char *) haystack);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	if (len == 0)
		return (0);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	if (len <= ft_strlen(haystack))
	{
		while (i <= len - ft_strlen(needle))
		{
			if (ft_memcmp(needle, haystack, ft_strlen(needle)) != 0)
				haystack++;
			else if (ft_memcmp(needle, haystack, ft_strlen(needle)) == 0)
				return ((char *) haystack);
			i++;
		}
	}
	return (NULL);
}
