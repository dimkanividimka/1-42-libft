/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:36:20 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/09 22:36:58 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_atoi takes number in a form of string, remove whitespace characters from
 * its beginning and returns it as integer
 *
 * Parameters:
 * - *str: pointer to the array where integer number is expected.
 *
 * Return:
 * - number as integer.
 * - 0 if no number was found.
 */
#include "libft.h"

int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_issign(const char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (sign * res);
}
