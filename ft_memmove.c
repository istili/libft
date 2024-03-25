/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:32:06 by istili            #+#    #+#             */
/*   Updated: 2023/11/10 02:59:30 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d == s)
		return (dst);
	if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	if (d < s)
		ft_memcpy(dst, src, len);
	return (dst);
}
