/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:21:35 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/08 21:26:39 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(const char *str)
{
	int	i;
	
	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while(str[i])
	{	
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
