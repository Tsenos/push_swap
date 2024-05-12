/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:40:25 by tifavre           #+#    #+#             */
/*   Updated: 2024/05/12 18:29:48 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	(void)argc;
	
	ft_checkargs(argc, argv);
	// before creating stacks, study structures again (with typedef, enum, memory, all)
	// create stacks, hint: (t_list **)malloc(sizeof(t_list)), with value, index, *next
	// put all in stack a
	// check if stack a already sorted (then free), if not sort it
	// free both stacks
	ft_printf("Testing argv:\t %s\n", argv[1]);
	return (0);
}