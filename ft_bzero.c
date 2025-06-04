/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:38:50 by zkarali           #+#    #+#             */
/*   Updated: 2025/05/30 15:57:12 by zkarali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdio.h>
int main()
{
	char s[]="asdfghjk";
	ft_bzero(s, 3);
	printf("%s", s+3); // nulldan sonraki karakterleri yazdırır
     // printf("%s", s); başta nulla başladığı için programı sonlandırır
}
