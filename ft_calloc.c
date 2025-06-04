/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <zkarali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:39:58 by zkarali           #+#    #+#             */
/*   Updated: 2025/06/03 17:51:43 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t a;
    
    a = 0;   
    while (nmemb--)
    {
        
    }
    a = ((size_t *)malloc(sizeof(size_t) * (nmemb)));
    if (!a)
        return (0);
}

// tamamlanmadı, If nmemb or size is 0, then calloc() returns a unique
// pointer value that can be successfully passed to free()