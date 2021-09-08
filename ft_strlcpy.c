/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:16:48 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/08 17:17:26 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	if (!size)
		return (0);
	while ( i++ < size && src && dst)
		*dst++ = *src++;
	dst = '\0';
	return (i);
}
