/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:19:05 by aboehm            #+#    #+#             */
/*   Updated: 2021/09/06 17:59:41 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*s != c)
	{
		if (!*p)
			return (NULL);
		p++;
	}
	return (p);
}
/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../include/libft.h"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strchr(char *s, int c, int offset)
{
	char		*str;

	if (!(str = ft_strchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}

int				main(int argc, const char *argv[])
{
	char		str2[] = "bonjour";
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_strchr(str2, 'b', 0);
	else if (arg == 2)
		check_strchr(str2, 'o', 1);
	else if (arg == 3)
		check_strchr(str2, 'j', 3);
	else if (arg == 4)
		check_strchr(str2, 's', 0);
	else if (arg == 5)
		check_strchr(str2, '\0', 7);
	else if (arg == 6)
	{
		char	str3[] = "";

		check_strchr(str3, '\0', 0);
	}
	return (0);
}*/
