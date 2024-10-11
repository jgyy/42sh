/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:28:47 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/11 13:28:56 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
    char *original_dst = dst;
    while (*src)
        *dst++ = *src++;
    *dst = '\0';
    return original_dst;
}
