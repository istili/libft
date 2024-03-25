/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:19:30 by istili            #+#    #+#             */
/*   Updated: 2023/11/11 03:08:29 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!need[x])
		return ((char *)hay);
	while (x < len && hay[x])
	{
		y = 0;
		while (x + y < len && hay[x + y] && hay[x + y] == need[y])
		{
			y++;
			if (!need[y])
				return ((char *)&hay[x]);
		}
		x++;
	}
	return (0);
}
