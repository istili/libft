/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:49:38 by istili            #+#    #+#             */
/*   Updated: 2023/11/07 02:52:28 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (dstsize + slen);
	dstsize -= dlen;
	if (dstsize)
	{
		while (src[i] && (dstsize - 1))
		{
			dst[dlen + i] = src[i];
			i++;
			dstsize--;
		}
		dst[dlen + i] = 0;
	}
	return (dlen + slen);
}
