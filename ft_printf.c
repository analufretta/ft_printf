/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:29:27 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/21 14:43:45 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	which_specifier(const char specifier, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			count += which_specifier(*(++format), ap);
			format++;
		}
		else
		{
			write(1, format, 1);
			format++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}

static int	which_specifier(const char specifier, va_list ap)
{
	int	len;

	if (specifier == '%')
		len = ft_printchar(specifier);
	if (specifier == 'c')
		len = ft_printchar(va_arg(ap, int));
	if (specifier == 's')
		len = ft_printstr(va_arg(ap, char *));
	if (specifier == 'd' || specifier == 'i')
		len = ft_printdi((long)va_arg(ap, int));
	if (specifier == 'u')
		len = ft_printu((long)va_arg(ap, unsigned int));
	if (specifier == 'x' || specifier == 'X')
		len = ft_printhex((long)va_arg(ap, unsigned int), specifier);
	if (specifier == 'p')
		len = ft_printp(va_arg(ap, void *));
	return (len);
}
