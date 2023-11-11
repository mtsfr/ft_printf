/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 00:06:09 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/11 00:44:51 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(char c);
int		ft_printstr(const char *str);
int		ft_printptr(void *ptr);
int		ft_printnbr(int nb);
char	*ft_itoa(int n);
char	*ft_utoa_base(unsigned long long nbr, int base, char *hex);
int		ft_printhex(unsigned int nbr, char *hex);
int		ft_printunsigned(unsigned int nb);

#endif
