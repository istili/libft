/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:36:12 by istili            #+#    #+#             */
/*   Updated: 2023/11/03 03:18:23 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*i1;
	unsigned char	*i2;

	i1 = (unsigned char *)s1;
	i2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (n > i && i1[i] == i2[i])
		i++;
	if (n == i)
		return (0);
	return (i1[i] - i2[i]);
}
