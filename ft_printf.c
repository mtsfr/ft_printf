/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <mfaria-b@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:20:07 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/11/06 23:01:31 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	type_handle(const char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		//
	else if (c == 'p')
		//
	else if (c == 'd')
		//
	else if (c == 'i')
		//
	else if (c == 'u')
		//
	else if (c == 'x')
		//
	else if (c == 'X')
		//
	else if (c == '%')
		//
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;
	
	i = 0;
	len = 0;
	va_start(args, str);

	while(str[i])
	{
		if (str[i] == '%') // && ft_strchr("cspdiuxX%", str[i + 1]) 
		{
			len += type_handle((str[i + 1]), args);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}

	va_end(args);
	return (len);
}
