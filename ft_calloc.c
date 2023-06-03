/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:23:56 by abdjalla          #+#    #+#             */
/*   Updated: 2023/03/23 15:23:56 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;
	size_t	i;
	size_t	len;

	if (size && count > (SIZE_MAX / size))
		return (NULL);
	len = count * size;
	x = malloc(len);
	i = 0;
	if (!x)
	{
		return (NULL);
	}
	while (i < len)
	{
		*(char *)(x + i) = '\0';
		i++;
	}
	return (x);
}
