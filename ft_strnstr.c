#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[0] == '\0' && little[0] != '\0')
			return ((char *)&big[i + 1]);
		while (big[i] == little[x])
		{
			i++;
			x++;
			if (little[x] == '\0' && i <= len && i >= x)
				return ((char *)&big[i - x]);
			if (big[i] != little[x])
				i = 0;
		}
		i++;
	}
	return (NULL);
}
