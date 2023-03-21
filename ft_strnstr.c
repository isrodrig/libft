/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:29:52 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/16 15:30:08 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sstr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (sstr[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == sstr[j] && (i + j) < len)
		{
			if (sstr[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str[20] = "dios mio";
	const char	sstr[10] = "io";
	char		*result;

	result = ft_strnstr(NULL, sstr, 4);
	printf("The substring is: %s\n", result);
	return (0);
}*/
