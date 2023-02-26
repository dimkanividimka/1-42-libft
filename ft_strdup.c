/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:28:43 by dstarov           #+#    #+#             */
/*   Updated: 2023/02/19 22:04:23 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	char	*start;
	int		len;

	len = ft_strlen(s);
	s2 = malloc(sizeof(char) * (len + 1));
	start = s2;
	if (!s2)
		return (NULL);
	while (*s)
	{
		*s2 = *s;
		s++;
		s2++;
	}
	*s2 = '\0';
	return (start);
}
