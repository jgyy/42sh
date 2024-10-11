/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:41:28 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/11 13:41:39 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dstlen = 0;
    size_t srclen = 0;
    
    while (dst[dstlen] && dstlen < dstsize)
        dstlen++;
    while (src[srclen])
        srclen++;
    
    if (dstlen == dstsize)
        return dstsize + srclen;
    
    size_t i = 0;
    while (src[i] && dstlen + i + 1 < dstsize)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    
    return dstlen + srclen;
}
