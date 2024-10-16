/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:30:32 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/11 13:30:40 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    char *original_s1 = s1;
    while (*s1)
        s1++;
    while (n-- && *s2)
        *s1++ = *s2++;
    *s1 = '\0';
    return original_s1;
}
