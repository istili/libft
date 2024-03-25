/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 03:20:47 by istili            #+#    #+#             */
/*   Updated: 2023/11/11 16:36:26 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	x = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && x[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char *)&s[i]);
}
