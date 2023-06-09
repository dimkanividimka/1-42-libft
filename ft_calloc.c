/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:42:27 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/09 21:27:43 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * Allocates memory for an array of elements, initializes the memory to zero,
 * and returns a pointer to the allocated memory.
 *
 * Parameters:
 * - nitems: Number of elements in the array.
 * - size:   Size of each element in bytes.
 *
 * Return:
 * - On success, a pointer to the allocated memory.
 * - On failure, NULL.
 */
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (nitems == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if ((nitems * size) < nitems || (nitems * size) < size)
		return (NULL);
	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
