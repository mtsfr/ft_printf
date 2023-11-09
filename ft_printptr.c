/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:27:52 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/08 22:33:29 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	
	if (ptr == 0)
	{
		len = ft_printstr("(nil)");
		return (len);
	}
	ft_printstr("0x");
	len += 2;


}
