/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:50:52 by dstarov           #+#    #+#             */
/*   Updated: 2023/02/25 17:56:10 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	l_size;

	l_size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		l_size++;
	}
	return (l_size);
}
