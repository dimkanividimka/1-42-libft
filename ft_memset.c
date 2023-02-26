/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:28:22 by dstarov           #+#    #+#             */
/*   Updated: 2023/01/23 16:45:57 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *adr, int val, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)adr)[i] = val;
		i++;
	}
	return (adr);
}
