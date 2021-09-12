/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:27:58 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/11 21:05:31 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	size_t	size;

	size = strlen(s) + 1;
	clone = (char *)malloc(size);
	if (!clone)
		return (NULL);
	memcpy(clone, s, size);
	return (clone);
}
/*
#include <stdio.h>
int main ()
{
	char thing[] = "this is totally a string!";
	char *output;
	output = (char *)ft_strdup((const char *)thing);
	printf("%s",output);
	return 0;
}
*/
