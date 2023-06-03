#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ret[i] == c)
		{
			return (&ret[i]);
		}
		i++;
	}
	return (NULL);
}
