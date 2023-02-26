/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:27:17 by dstarov           #+#    #+#             */
/*   Updated: 2023/02/25 20:37:30 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*prev;

	if (lst && *lst && del)
	{
		temp = *lst;
		while (temp)
		{
			prev = temp->next;
			ft_lstdelone(temp, del);
			temp = prev;
		}
		*lst = NULL;
	}
}
