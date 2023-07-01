/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:11:36 by dstarov           #+#    #+#             */
/*   Updated: 2023/07/01 10:15:14 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* This function searches for a character within a defined memory block
 * 
 * Parameters:
 * - *str: pointer to a start of memory block.
 * - c: character to search for.
 * - n: maximum number of elements to be checked.
 * 
 * Return:
 * - pointer to the first occurrence of the character.
 * - NULL if the character wasn't found. 
 */
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
