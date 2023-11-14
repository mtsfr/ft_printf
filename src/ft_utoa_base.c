/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:46:31 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/11 03:23:47 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	nbrlen_base(unsigned long long nbr, int base)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		len++;
		nbr /= base;
	}
	return (len);
}

char	*ft_utoa_base(unsigned long long nbr, int base, char *hex)
{
	char		*str;
	size_t		len;

	len = nbrlen_base(nbr, base);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = hex[nbr % base];
		nbr /= base;
	}
	return (str);
}
