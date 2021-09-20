/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:09:49 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/20 14:20:04 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordlen(const char *s, char c)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i++])
		len++;
	return (len);
}

size_t	ft_wordcount(const char *s, char c)
{
	unsigned int	i;
	size_t			w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	k;

	array = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!s || !array)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ft_wordcount(s, c))
	{
		array[i] = (char *)malloc(sizeof(char) * ft_wordlen(&s[k], c) + 1);
		if (!array[i])
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			array[i][j++] = s[k++];
		array[i][j] = '\0';
		i++;
	}
	return (array);
}
