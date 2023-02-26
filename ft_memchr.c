/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:11:36 by dstarov           #+#    #+#             */
/*   Updated: 2023/02/13 20:54:12 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*s;

	s = str;
	i = 0;
	if (c > 127)
		c = c % 128;
	while (i < n)
	{
		if (*s == c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
