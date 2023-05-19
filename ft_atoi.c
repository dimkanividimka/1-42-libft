/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:36:20 by dstarov           #+#    #+#             */
/*   Updated: 2023/05/19 21:58:03 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_atoi takes number in a form of string, remove whitespace characters from */
/*its beginning and returns it as integer                                     */
#include "libft.h"
/* checks if passed character should be skipped as a whitespace character */
int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

/* checks if passed character is a sign */
int	ft_issign(const char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

/* main part of function which takes a string as input, skips whitespace 
characters, takes a sign of a number and converts the rest of the string into 
integer via getting the numeric value of the digit character by subtracting the
ASCII value of '0'*/
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
