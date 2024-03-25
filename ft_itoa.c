/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istili <istili@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:51:33 by istili            #+#    #+#             */
/*   Updated: 2023/11/08 03:04:09 by istili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	nbr_digits;

	nbr_digits = 0;
	if (n <= 0)
	{
		nbr_digits++;
		n = -n;
	}
	while (n > 0)
	{
		nbr_digits++;
		n /= 10;
	}
	return (nbr_digits);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*ret;

	nb = (long)n;
	i = count_digits(nb);
	ret = malloc(i + 1);
	if (!ret)
		return (0);
	if (nb < 0)
	{
		ret[0] = '-';
		nb = -nb;
	}
	ret[i] = '\0';
	i--;
	if (nb == 0)
		ret[0] = '0';
	while (nb > 0)
	{
		ret[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	return (ret);
}

// int	main()
// {
// 	char	*s = ft_itoa(-2147483648);
// 	printf("%s\n", s);
// 	free(s);
// }