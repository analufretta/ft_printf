/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:29:27 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/18 17:28:28 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	which_specifier(char specifier, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	va_start(arg, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			count += which_specifier((char *)format++, arg);
		}
		write(1, format, 1);
		count++;
		format++;
	}
	va_end(arg);
	return (count);
}

static int	which_specifier(char specifier, va_list ap)
{
	int	len;

	if (specifier == 'c' || specifier == '%')
		len = ft_printchar(va_arg(ap, int));
	if (specifier == 's')
		len = ft_printstr(va_arg(ap, char *));
	if (specifier == 'd' || specifier == 'i' || specifier == 'u')
		len = ft_printdiu(va_arg(ap, int));
	if (specifier == 'x' || specifier == 'X')
		len = ft_printhex(va_arg(ap, unsigned int), specifier);
	//TODO:DONT'T FORGET THE %p FORMAT
	return (len);
}
