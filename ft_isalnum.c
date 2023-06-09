/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:44:28 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/09 22:41:36 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks if the given integer 'a' represents an alphanumeric character.
 * An alphanumeric character is defined as an uppercase letter, lowercase 
 * letter, or a digit.
 *
 * Parameters:
 * - a: The integer representing ASCII character to be checked.
 *
 * Return:
 * - 1 if 'a' is an alphanumeric character.
 * - 0 otherwise.
 */

int	ft_isalnum(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (1);
	else if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
