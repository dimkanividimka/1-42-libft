/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:28:30 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/11 12:01:02 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function checks if the given integer 'a' represents a printable
 * character.
 * A printable character is defined as a character with a value between '32' and 
 * '126' (inclusive).
 *
 * Parameters:
 * - a: The integer to be checked.
 *
 * Return:
 * - 1 if 'a' is printable.
 * - 0 otherwise.
 */

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}
