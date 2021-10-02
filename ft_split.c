#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (word);
}

static void	ft_count_ptr(const char *s, char c, int *l)
{
	while (s[*l] == c && s[*l] != '\0')
		(*l)++;
}

static char	*ft_memmory_massiv(char *word, char const *s, char c, int *wword)
{
	int	symb;
	int	k;
	int	l;

	symb = 0;
	l = 0;
	k = 0;
	ft_count_ptr(s, c, &l);
	while (s[l] != c && s[l] != '\0')
	{
		symb++;
		l++;
	}
	ft_count_ptr(s, c, &l);
	word = (char *)malloc(sizeof(char) * (symb + 1));
	if (!word)
		return (NULL);
	symb = 0;
	while (s[k] == c)
		k++;
	while (s[k] != c && s[k] != '\0')
		word[symb++] = s[k++];
	word[symb] = '\0';
	*wword = l;
	return (word);
}

static char	**ft_no_malloc(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free (arr[i]);
		i++;
	}
	free (arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count_word;
	char	**arr;
	char	*word;
	int		wword;

	if (!s)
		return (NULL);
	word = NULL;
	i = 0;
	count_word = ft_count_word(s, c);
	arr = (char **)malloc(sizeof(char *) * (count_word + 1));
	if (!arr)
		return (NULL);
	while (i < count_word)
	{
		arr[i] = ft_memmory_massiv(word, s, c, &wword);
		if (!arr[i])
			return (ft_no_malloc(arr));
		s += wword;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
