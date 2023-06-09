/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:27:45 by abdjalla          #+#    #+#             */
/*   Updated: 2022/11/12 16:59:44 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	xx;

	i = 0;
	x = 0;
	xx = 0;
	if (dst)
		x = ft_strlen(dst);
	xx = ft_strlen(src);
	if (!src)
		return (x);
	if (x >= size)
		return (size + xx);
	while ((i + x) < (x + xx) && (i + x) < (size - 1))
	{
		dst[i + x] = src[i];
		i++;
	}
	if (i < size)
	{
		dst[i + x] = '\0';
	}
	return (xx + x);
}
