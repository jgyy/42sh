/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:57:21 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/11 13:57:35 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *d = dst;
    const unsigned char *s = src;
    while (n--)
    {
        *d = *s;
        if (*s == (unsigned char)c)
            return d + 1;
        d++;
        s++;
    }
    return NULL;
}
