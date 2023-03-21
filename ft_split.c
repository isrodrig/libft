/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:46:00 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/15 18:03:28 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i +1] == c || s[i + 1] == '\0'))
			res++;
		i++;
	}
	return (res);
}

char	**lib(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**wi(char const *s, char c, char **res)
{
	int	i;
	int	start;
	int	x;

	i = 0;
	start = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c && s[i +1] != c)
			start = i + 1;
		else if (s[i] != c && (s[i +1] == c || s[i +1] == '\0'))
		{
			res[x] = ft_substr(s, start, i - start + 1);
			if (res[x] == NULL)
				return (lib(res));
			x++;
		}
		i++;
	}
	res[x] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**ress;

	if (!s)
		return (0);
	ress = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!ress)
		return (0);
	ress = wi(s, c, ress);
	return (ress);
}
