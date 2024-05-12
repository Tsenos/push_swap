/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:30:48 by tifavre           #+#    #+#             */
/*   Updated: 2024/05/12 16:03:09 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbri(int n)
{
	int	nbr;
	int	len;

	nbr = n;
	len = 1;
	if (n < 0)
	{
		len += ft_putchari('-');
		if (n == -2147483648)
		{
			len += ft_putstri("2147483648");
			return (--len);
		}
		n *= (-1);
	}
	if (n / 10)
		ft_putnbri(n / 10);
	ft_putchari((n % 10 + 48));
	while (nbr / 10)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}

int	ft_putnbri_uns(unsigned int n)
{
	unsigned int	nbr;
	int				len;

	len = 1;
	if (n < 0)
		n += 4294967295;
	nbr = n;
	if (n / 10)
		ft_putnbri_uns(n / 10);
	ft_putchari((n % 10 + 48));
	while (nbr / 10)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}

int	ft_puthexi(unsigned long long int n, int m)
{
	unsigned long long int	nbr;
	int						len;

	len = 1;
	nbr = n;
	if (n / 16)
		ft_puthexi(n / 16, m);
	if (n % 16 < 10)
		ft_putchari((n % 16 + 48));
	else if (m == 120)
		ft_putchari((n % 16 + 87));
	else
		ft_putchari((n % 16 + 55));
	while (nbr / 16)
	{
		len += 1;
		nbr /= 16;
	}
	return (len);
}
