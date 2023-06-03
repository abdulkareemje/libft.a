#include "libft.h"

int	startlen(const char *s, char const *set1)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (set1[b] != '\0')
	{
		if (s[a] == set1[b])
		{
			a++;
			b = 0;
		}
		else
			b++;
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	a;
	int	b;
	int	c;
	int	len;

	if (!s1 || !set)
		return (NULL);
	c = ft_strlen(s1) - 1;
	a = startlen(s1, set);
	b = 0;
	while (set[b] != '\0')
	{
		if (s1[c] == set[b] && c > 0)
		{
			c--;
			b = 0;
		}
		else
			b++;
	}
	len = c - a + 1;
	if (len <= 0)
		return (ft_substr(s1, a, 1));
	return (ft_substr(s1, a, len));
}