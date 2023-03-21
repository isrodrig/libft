/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:34:09 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/15 16:47:42 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str;

	str = ft_strlen((char *)s);
	if ((char)c == '\0' && s[str] == '\0')
		return (&((char *)s)[str]);
	while (str-- && s[str])
	{
		if (*(str + s) == (char)c)
			return ((char *)(str + s));
	}
	return (0);
}
