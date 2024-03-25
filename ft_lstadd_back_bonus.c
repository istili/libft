/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:10:02 by istili            #+#    #+#             */
/*   Updated: 2023/11/07 04:21:46 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*c;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	c = *lst;
	while (c->next)
		c = c->next; 
	c->next = new;
}
