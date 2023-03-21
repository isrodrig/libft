/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:11:22 by isrodrig          #+#    #+#             */
/*   Updated: 2023/02/17 14:24:42 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*thing;
	t_list	*new;
	void	*content;

	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		thing = ft_lstnew(content);
		if (!thing)
		{
			free (content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, thing);
		lst = lst->next;
	}
	return (new);
}
