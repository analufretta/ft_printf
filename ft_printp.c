/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:42:08 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/21 14:29:31 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(void *ptr)
{
	int				len;
	unsigned long	addr;

	len = 0;
	addr = (unsigned long) ptr;
	if (ptr == NULL)
		return (len += ft_printstr("(nil)"));
	else
	{
		len += ft_printstr("0x");
		len += ft_printhex(addr, 'x');
	}
	return (len);
}
