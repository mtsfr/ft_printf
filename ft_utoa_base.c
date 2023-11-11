/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:46:31 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/10 23:44:57 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	nbrlen_base(int nbr, int base)
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
			nbr /= base;
		}
	}
	return (len);
}

char	*ft_utoa_base(int n, int base, char *hex)
{
	char		*str;
	size_t		len;
	long long	num;

	len = nbrlen_base(n, base);
	num = n;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len] = hex[num % base];
		num /= base;
		len--;
	}
	return (str);
}
