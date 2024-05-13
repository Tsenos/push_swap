/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:40:44 by tifavre           #+#    #+#             */
/*   Updated: 2024/05/13 12:04:13 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "libft/libft.h"

// typedef	struct s_list {
// 	int		value;
// 	int		index;
// 	t_list	*next;
// } t_list;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// push_swap_utils.c
void	ft_printerr(void);
void	ft_fill_a(t_list **stack, int argc, char **argv);

// check_args.c
void	ft_checkargs(int argc, char **argv);

// lst functions to modify
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif