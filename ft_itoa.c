/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:07:27 by dmytro            #+#    #+#             */
/*   Updated: 2023/02/24 18:30:58 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_depth(int n)
{
	int	d;

	d = 0;
	while (n != 0)
	{
		n = n / 10;
		d++;
	}
	return (d);
}

char	*n_is_zero(int n)
{
	char	*s;

	if (n == 0)
	{
		s = malloc(sizeof(char) * 2);
		if (!s)
			return (NULL);
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	return (NULL);
}

char	*neg_val(int n)
{
	char			*s;
	int				len;
	unsigned int	un;	

	un = n * (-1);
	len = 1;
	len = len + count_depth(un);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	s[0] = '-';
	while (un > 0)
	{
		len--;
		s[len] = (char)(un % 10 + 48);
		un = un / 10;
	}
	return (s);
}

char	*pos_val(int n)
{
	char	*s;
	int		len;

	len = 0;
	len = len + count_depth(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (n > 0)
	{
		len--;
		s[len] = (char)(n % 10 + 48);
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (n_is_zero(n));
	else if (n < 0)
		return (neg_val(n));
	else
		return (pos_val(n));
}
