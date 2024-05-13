/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:35:22 by timothy           #+#    #+#             */
/*   Updated: 2024/05/13 12:05:04 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*void	f(void *s)
{
	printf("Here's the node's address: %p\n", s);
}

int main(void)
{
    t_list *node1 = ft_lstnew((void *)42);
    t_list *node2 = ft_lstnew((void *)123);
    t_list *node3 = ft_lstnew((void *)432);

    node1->next = node2;
    node2->next = node3;
	node3->next = NULL;

	ft_lstiter(node1, f);
    while (node1 != NULL)
    {
        printf("%d -> ", (int)(intptr_t)node1->content);
        node1 = node1->next;
    }
    printf("NULL\n");
    
	return 0;
}*/
