/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:48:27 by dstarov           #+#    #+#             */
/*   Updated: 2023/02/22 18:47:30 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_p;
	size_t	src_p;
	size_t	res;

	dst_p = 0;
	src_p = 0;
	if (size <= 0)
		return (size + ft_strlen(src));
	while (dst[dst_p] && dst_p < size)
		dst_p++;
	while (src[src_p])
		src_p++;
	if (size > dst_p)
		res = dst_p + src_p;
	else
		res = size + src_p;
	src_p = 0;
	while (size != 0 && src[src_p] && (dst_p < size - 1))
		dst[dst_p++] = src[src_p++];
	if (size > dst_p)
		dst[dst_p] = '\0';
	return (res);
}
