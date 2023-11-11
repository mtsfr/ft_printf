/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:24:28 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/10 21:46:10 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int nbr, char *hex)
{
	int		len;
	char	*ptr;

	len = 0;
	ptr = ft_utoa_base(nbr, 16, hex);
	len = ft_printstr(ptr);
	free(ptr);
	return (len);
}
