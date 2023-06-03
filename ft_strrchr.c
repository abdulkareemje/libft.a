#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	x;

	i = 0;
	while (s[i])
	{
		i++;
	}
	x = i;
	while (x >= 0)
	{
		if (s[x] == (char) c)
		{
			return ((char *)(s + x));
		}
		x--;
	}
	return (0);
}