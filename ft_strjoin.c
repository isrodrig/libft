/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:17:44 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/09 21:09:39 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		is;
	char	*s;

	if (!s1 || !s2)
		return (0);
	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
	if (!s)
		return (NULL);
	i = 0;
	is = 0;
	while (s1[i] != '\0')
		s[is++] = s1[i++];
	i = 0;
	while (s2[i])
		s[is++] = s2[i++];
	s[is] = '\0';
	return (s);
}
