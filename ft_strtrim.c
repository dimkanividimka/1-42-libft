/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:57:19 by dstarov           #+#    #+#             */
/*   Updated: 2023/02/21 17:59:32 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	inset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	st;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	st = 0;
	while (s1[i] != '\0' && inset(s1[i], set))
		i++;
	while (inset(s1[j - 1], set) && j > i)
		j--;
	s = malloc(sizeof(char) * (j - i + 1));
	if (!s)
		return (NULL);
	while (i < j)
	{
		s[st] = s1[i];
		st++;
		i++;
	}
	s[st] = '\0';
	return (s);
}
