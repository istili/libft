/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:22:39 by istili            #+#    #+#             */
/*   Updated: 2023/11/03 04:39:09 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	i;

	i = ft_strlen(s1);
	s = malloc(i + 1);
	if (s == NULL)
		return (NULL);
	s = ft_memcpy(s, s1, (i + 1));
	return (s);
}
