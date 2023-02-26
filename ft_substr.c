/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:01:16 by dstarov           #+#    #+#             */
/*   Updated: 2023/02/19 16:53:13 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	chk_len(char const *s, unsigned int start, size_t len)
{
	size_t	l;

	l = len;
	if ((size_t)start + len > ft_strlen(s))
		l = ft_strlen(s) - (size_t)start;
	if ((size_t)start > ft_strlen(s))
		l = 0;
	return (l);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	char	*st;
	size_t	i;

	if (!s)
		return (NULL);
	len = chk_len(s, start, len);
	i = len;
	s2 = malloc(sizeof(char) * (len + 1));
	st = s2;
	if (!s2)
		return (NULL);
	while (*s && i > 0)
	{
		*s2 = s[start];
		s2++;
		s++;
		i--;
	}
	*s2 = '\0';
	return (st);
}
