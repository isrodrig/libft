/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:54:03 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/06 15:38:01 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			m;
	unsigned char	*is;
	unsigned char	*iss;

	is = (unsigned char *)s1;
	iss = (unsigned char *)s2;
	m = 0;
	while (m < n)
	{
		if (((unsigned char *)s1)[m] == ((unsigned char *)s2)[m])
			m++;
		else
			return (((unsigned char *)s1)[m] - ((unsigned char *)s2)[m]);
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[15] = "abcde";
	char	s2[15] ="abcde";
	int		r;
	int		r2;

	r = ft_memcmp(s1, s2, 6);
	r2 = ft_memcmp(s1, s2, 6);

	if (r > 0)
		printf("s2 is less than s1");
	else if (r < 0)
		printf("s1 is less than s2");
	else
		printf("s1 is equal to s2");
	if (r2 > 0)
		printf("s1 is less than s2");
	else if (r2 < 0)
		printf("s2 is less than s1");
	else
		printf("s1=s2");
	return (0);
}*/
