#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	neg = 0;
	nb = 0;
	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		neg = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (str[i] - 48) + (10 * nb);
		i++;
	}
	if (neg == 1)
		nb = nb * -1;
	return (nb);
}
