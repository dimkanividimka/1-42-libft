/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmytro <dmytro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:31:11 by dstarov           #+#    #+#             */
/*   Updated: 2023/06/09 22:43:59 by dmytro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function checks if the given integer 'a' represents a digit character.
 * A digit character is defined as a character with a value between '0' and 
 * '9' (inclusive).
 *
 * Parameters:
 * - a: The integer to be checked.
 *
 * Return:
 * - 1 if 'a' is a digit character.
 * - 0 otherwise.
 */

int	ft_isdigit(int a)
{
	if (a < '0' || a > '9' )
		return (0);
	else
		return (1);
}
