/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:38:08 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/09 22:36:04 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * fills an array with '/0' according to a given pointer and specified lenght
 * Parameters:
 * - adr: Pointer to the memory block to be zeroed.
 * - len: Number of bytes to be set to zero.
 *
 * Return:
 * - None
 */
#include "libft.h"

void	ft_bzero(void *adr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)adr)[i] = '\0';
		i++;
	}
}
