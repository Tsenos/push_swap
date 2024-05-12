/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:28:39 by tifavre           #+#    #+#             */
/*   Updated: 2024/05/12 16:03:10 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchari(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstri(char *s)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putpointi(unsigned long p)
{
	int	len;

	len = 0;
	if (p == 0)
	{
		len += ft_putstri("0x0");
		return (3);
	}
	len += ft_putstri("0x");
	len += ft_puthexi(p, 'x');
	return (len);
}