/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:36:02 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/10 22:56:14 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = ft_itoa(nb);
	len = ft_printstr(ptr);
	free(ptr);
	return (len);
}
