/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:40:37 by tifavre           #+#    #+#             */
/*   Updated: 2024/05/13 12:15:25 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printerr(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
	return ;
}

void	ft_fill_a(t_list **stack, int argc, char **argv)
{
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
	{
		args = ft_split(*argv, ' ');
	}
	else
		args = argv;
	while (args)
	{
		ft_printf("testing : %s\n", args[i++]);
	}
	(void)**stack;
	return ;
}

