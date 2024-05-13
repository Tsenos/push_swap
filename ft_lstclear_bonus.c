/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:39:04 by timothy           #+#    #+#             */
/*   Updated: 2024/05/13 12:04:59 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	free(content);
}

int main(void)
{
    t_list *node1 = ft_lstnew((void *)42);
    t_list *node2 = ft_lstnew((void *)123);
    t_list *node3 = ft_lstnew((void *)432);

    node1->next = node2;
    node2->next = node3;
	node3->next = NULL;

	ft_lstdelone(node2, del);
    while (node1 != NULL)
    {
        printf("%d -> ", (int)(intptr_t)node1->content);
        node1 = node1->next;
    }
    printf("NULL\n");
    
	return 0;
}*/