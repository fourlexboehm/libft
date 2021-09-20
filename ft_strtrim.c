/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:57:03 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/19 14:34:48 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char current, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (current == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trimmed;

	i = 0;
	while (s1[i])
	{
		if (in_set(s1[i], set))
			i++;
		else
			break ;
	}
	j = ft_strlen((char *)s1);
	while (s1[j])
	{
		if (in_set(s1[j], set))
			j--;
		else
			break ;
	}
	trimmed = (char *) malloc(sizeof(char) * (j - i) + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + i, j - i + 1);
	return (trimmed);
}
/*
int main()
{
	char set[] = "\t \n";
	char s1[] = "\t lorem ipsum";

	printf("%s", s1);
	printf("%s", ft_strtrim(s1, set));
}
*/
