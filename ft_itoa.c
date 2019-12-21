/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:20:43 by plam              #+#    #+#             */
/*   Updated: 2019/10/23 19:27:35 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(unsigned int n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (1);
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int					len;
	unsigned int		nbr;
	char				*dest;

	nbr = (n < 0) ? -n : n;
	len = (n < 0) ? nb_len(nbr) + 1 : nb_len(nbr);
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	dest[len] = '\0';
	while (len-- > 0)
	{
		dest[len] = '0' + nbr % 10;
		nbr /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
