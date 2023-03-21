/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:12:16 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/01 15:22:53 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	m;

	if (dest == src || !n)
		return (dest);
	m = 0;
	while (m < n)
	{
	*((char *)dest + m) = *((char *)src + m);
	m++;
	}
	return (dest);
}
