/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:23:04 by abdjalla          #+#    #+#             */
/*   Updated: 2023/01/20 20:28:43 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*fdst;
	char	*fsrc;

	fdst = (char *)dst;
	fsrc = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (i < len--)
	{
		fdst[len] = fsrc[len];
	}
	return (dst);
}
