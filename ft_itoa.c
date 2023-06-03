#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*maker(char *x, int n)
{
	int	i;
	int	len;

	i = 0;
	len = ft_intlen(n);
	if (n < 0)
	{
		x[i++] = '-';
		n = n * -1;
	}
	len--;
	while (n)
	{
		x[len--] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (i == 0)
		x[i++] = '0';
	x[i] = '\0';
	return (x);
}

char	*ft_itoa(int n)
{
	char	*x;
	int		len;

	if (n == (-2147483648))
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	x = malloc(sizeof(char) * len + 1);
	if (!x)
		return (NULL);
	x = maker(x, n);
	return (x);
}
