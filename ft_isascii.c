/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:14:27 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/09 22:43:03 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function checks if the given integer 'a' represents an ASCII character.
 * An ASCII character is defined as a character with a value between 0 and 127
 * (inclusive).
 *
 * Parameters:
 * - a: The integer to be checked.
 *
 * Return:
 * - 1 if 'a' is an ASCII character.
 * - 0 otherwise.
 */

int	ft_isascii(int a)
{
	if (a < 0 || a > 127)
		return (0);
	else
		return (1);
}
