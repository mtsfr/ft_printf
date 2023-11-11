/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:21:35 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/11 01:24:43 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(const char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		str = "(null)";
	while (str[counter] != '\0')
		write(1, &str[counter++], 1);
	return (counter);
}
