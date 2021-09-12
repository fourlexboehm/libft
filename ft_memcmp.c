/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:01:38 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/11 21:34:25 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *sp1, const void *sp2, size_t n)
{
	const unsigned	char *p1;
	const unsigned	char *p2;

	if (n != 0)
	{
		p1 = sp1;
		p2 = sp2;
		while (1)
		{
			if (*p1++ != *p2++)
				return (*--p1 - *--p2);
		}
		while (--n != 0)
			;
	}
	return (0);
}
