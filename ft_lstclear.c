/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:39:14 by hahadiou          #+#    #+#             */
/*   Updated: 2022/10/11 16:00:26 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*holder;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		del(node->content);
		holder = node->next;
		free(node);
		node = holder;
	}
	*lst = NULL;
}
