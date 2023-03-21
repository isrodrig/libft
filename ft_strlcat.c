/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:04:38 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/08 19:44:23 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	is;
	size_t	valor;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < (size_t)ft_strlen(dest))
		valor = ft_strlen(src) + size;
	else
		valor = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	is = 0;
	while (src[is] != '\0' && i + 1 < size)
	{
		dest[i] = src[is];
		i++;
		is++;
	}
	dest[i] = '\0';
	return (valor);
}
