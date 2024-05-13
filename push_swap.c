/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:40:25 by tifavre           #+#    #+#             */
/*   Updated: 2024/05/13 12:17:15 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	(void)argc;
	
	ft_checkargs(argc, argv);
	// before creating stacks, study structures again (with typedef, memory, all)
	stack_a = (t_list **)malloc(sizeof(t_list));
	if (!stack_a)
		ft_printerr();
	stack_a = NULL;
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_b)
		ft_printerr();
	stack_b = NULL;
	// stack_a = ft_fill_a(stack_a, argc, argv);

	// create stacks, hint: (t_list **)malloc(sizeof(t_list)), with value, index, *next
	// put all in stack a
	// check if stack a already sorted (then free), if not sort it
	// free both stacks
	ft_printf("Testing argv:\t %s\n", argv[1]);
	return (0);
}