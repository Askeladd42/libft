/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:37 by plam              #+#    #+#             */
/*   Updated: 2019/10/22 14:08:47 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*dest;
	size_t			i;
	size_t			bytes;

	bytes = size * count;
	if (!(dest = (unsigned char *)malloc(bytes)))
		return (NULL);
	i = 0;
	while (i < bytes)
	{
		dest[i] = '\0';
		i++;
	}
	return ((void *)dest);
}
