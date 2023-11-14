/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:54:21 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/10 21:56:54 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printunsigned(unsigned int nb)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = ft_utoa_base(nb, 10, "0123456789");
	len = ft_printstr(ptr);
	free(ptr);
	return (len);
}
