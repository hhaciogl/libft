/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:08:39 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/06 20:23:06 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new_list;
	void	*new_content;

	new_list = NULL;
	curr = lst;
	while (curr)
	{
		new_content = f(curr->content);
		if (new_content == NULL)
		{
			del(curr->content);
		}
		ft_lstadd_back(&new_list, ft_lstnew(new_content));
		curr = curr->next;
	}
	return (new_list);
}
