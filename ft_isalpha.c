/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:22:44 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/09 22:41:34 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks if the given integer 'a' represents an alphabetical character.
 * An alphanumeric character is defined as an uppercase letter or lowercase
 * letter.
 *
 * Parameters:
 * - a: The integer representing alphabetical symbol from ASCII table to be
 * checked.
 *
 * Return:
 * - 1 if 'a' is an alphabetical character.
 * - 0 otherwise.
 */

int	ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	else
		return (0);
}
