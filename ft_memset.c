/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:08:28 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/04 13:55:04 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

#include <stdio.h>
int main()
{
    int b = 4200;
    int a[3] = {1, 2, 5};

    char *src = (char *)&b;
    char *dst = (char *)&a[2];
    
    ft_memset(dst++, *src++, 1);  
    ft_memset(dst++, *src++, 1);
    ft_memset(dst, *src, 1);

    printf("%d\n", a[2]);
}
