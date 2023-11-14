/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:27:52 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/11 02:13:50 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printptr(void *ptr)
{
	int					len;
	unsigned long long	address;
	char				*str;

	len = 0;
	address = (unsigned long long)ptr;
	if (!address)
	{
		len = ft_printstr("(nil)");
		return (len);
	}
	str = ft_utoa_base(address, 16, "0123456789abcdef");
	len += ft_printstr("0x");
	len += ft_printstr(str);
	free(str);
	return (len);
}
