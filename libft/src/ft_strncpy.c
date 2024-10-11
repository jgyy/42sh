/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:29:25 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/11 13:29:33 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t i;
    for (i = 0; i < len && src[i]; i++)
        dst[i] = src[i];
    for (; i < len; i++)
        dst[i] = '\0';
    return dst;
}
