/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:44:15 by istili            #+#    #+#             */
/*   Updated: 2023/11/07 05:03:02 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*next;
	t_list	*c;

	if (!lst)
		return ;
	c = *lst;
	while (c)
	{
		next = c->next;
		if (del)
		{
			del(c->content);
		}
		free(c);
		c = next;
	}
	*lst = NULL;
}
