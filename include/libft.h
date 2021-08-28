/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:35:40 by aboehm            #+#    #+#             */
/*   Updated: 2021/08/28 20:35:43 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
# define LIBFT
# include <string.h>

int		ft_isspace(char c);
int		ft_atoi(const char *str);
int		*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);

#endif
