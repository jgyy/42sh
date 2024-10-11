/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:28:17 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/11 13:28:29 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s);
    char *dup = malloc(len + 1);
    if (!dup)
        return NULL;
    for (size_t i = 0; i <= len; i++)
        dup[i] = s[i];
    return dup;
}
