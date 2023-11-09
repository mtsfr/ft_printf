/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:36:02 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/08 22:52:07 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	nbrlen(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		len++;
	else if (nbr == (-2147483648))
	{
		len = 11;
	}
	else
	{
		if (nbr < 0)
		{
			nbr *= -1;
			len++;
		}
		while (nbr > 0)
		{
			len++;
			nbr /= 10;
		}
	}
	return (len);
}

static void	ft_putnbr(int n)
{
	if (n == (-2147483648))
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n = n + 48;
		write(1, &n, 1);
	}
}

int	ft_printnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
	{
		len = ft_printchar(48);
		return (len);
	}
	ft_putnbr(nb);
	len = nbrlen(nb);
	return (len);
}
