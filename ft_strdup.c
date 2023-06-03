#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*x;

	x = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!x)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		x[i] = s[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
