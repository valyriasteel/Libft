/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:17:51 by bbosnak           #+#    #+#             */
/*   Updated: 2023/07/19 21:17:55 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

/* int main(void)
{
	t_list *list;
	t_list *new;

	list = ft_lstnew("Hello World!");
	new = ft_lstnew("Hello World!");
	ft_lstadd_front(&list, new);
	printf("%s | %s\n", list->content, list->next->content);
} */
