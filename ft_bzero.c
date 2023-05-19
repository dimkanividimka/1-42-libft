/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:38:08 by dstarov           #+#    #+#             */
/*   Updated: 2023/05/19 22:40:29 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fills an array with '/0' according to a given pointer and specified lenght */
#include "libft.h"

/* simply uses ft_memset to perform transformation */
void	ft_bzero(void *adr, size_t len)
{
	ft_memset(adr, '\0', len);
}
