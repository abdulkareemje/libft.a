/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdjalla <abdjalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:44:59 by abdjalla          #+#    #+#             */
/*   Updated: 2023/01/20 19:32:07 by abdjalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
    char *x = (char *)s;

    
    i = 0;
    while(x[i] != c)
    {
        i++;
    }
    return (x + i);
}

int main()
{
    const char i[] = "helooooo";
    
    printf("%s", ft_strchr(i, 'l'));
}