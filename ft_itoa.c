/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:52:05 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/17 19:51:14 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(int nbr)
{
	int i;
	
	i = 0;
	while (nbr)
		{
			nbr /= 10;
		}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	buff;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		buff = str[i];
		str[i] = str[length - 1];
		str[length - 1] = buff;
		length--;
		i++;
	}
	return (str);
}

char *ft_itoa(int n)
{
	char *str;
	int i;
	int sign;

	str = (char *)malloc(nbr_len(n));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648\0");
	sign = n;
	if (n < 0)
		n = -n;
	i = 0;
	do
		{
			str[i++] = n % 10 + '0';
		}
	while ((n /= 10) > 0);
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}
