/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 00:22:55 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/11 00:24:09 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- && *(char *)s++)
	{
		if (*(char *)s == c)
			return ((void *)s);
	}
	return (NULL);
}

/*
int main ()
{
	char *lex = (char *)memchr("array", 'r', 10);
	printf("%s", lex);
}
*/
