#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s2i;
	char	*z;

	i = 0;
	s2i = 0;
	if (!s1 || !s2)
		return (NULL);
	z = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!z)
		return (NULL);
	while (s1[i] != '\0')
	{
		z[i] = s1[i];
		i++;
	}
	while (s2[s2i] != '\0')
	{
		z[i] = s2[s2i];
		i++;
		s2i++;
	}
	z[i] = '\0';
	return (z);
}