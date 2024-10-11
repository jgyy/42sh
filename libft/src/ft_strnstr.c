/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:00:12 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/11 14:00:22 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (!*needle)
        return (char *)haystack;
    
    size_t needle_len = ft_strlen(needle);
    while (*haystack && len >= needle_len)
    {
        if (ft_strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;
        haystack++;
        len--;
    }
    return NULL;
}
