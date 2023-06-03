/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:31:58 by abdjalla          #+#    #+#             */
/*   Updated: 2023/01/20 19:10:06 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *dst1;
	char *src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	if(!src1)
		return(dst1);
	while(i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
/* 
int main()
{
	char src[5] = "hello";
	char dst[10] = "hi ";
	char src1[5] = "hello";
	char dst1[10] = "";
	printf("%s\n", ft_memcpy(dst, src, 5));
	printf("%s", memcpy(dst1, src1, 5));
}
*/