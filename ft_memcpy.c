/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:19:13 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/08 13:26:34 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*clone_dest;

	if (!dest && !src)
		return (NULL);
	clone_dest = dest;
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (clone_dest);
}
