/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:41:28 by istili            #+#    #+#             */
/*   Updated: 2023/11/11 02:48:08 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fix;
	size_t	len;	

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	fix = malloc(len + 1);
	if (fix == NULL)
		return (NULL);
	ft_memcpy(fix, s1, ft_strlen(s1));
	ft_memcpy(fix + ft_strlen(s1), s2, ft_strlen(s2));
	fix[len] = '\0';
	return (fix);
}
