/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:38:54 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/07 13:09:59 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pointer;

	pointer = (char *) s;
	while (n-- > 0)
		*pointer++ = (char)c;
	return (s);
}
