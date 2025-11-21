/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:02:57 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/21 10:53:12 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int	ft_printhex(unsigned long num, char hex)
{
	int		len;
	char	*base_low;
	char	*base_up;

	len = 0;
	base_low = "0123456789abcdef";
	base_up = "0123456789ABCDEF";
	if (num < 16)
	{
		if (hex == 'x')
			len += ft_printchar(base_low[num]);
		else if(hex == 'X')
			len += ft_printchar(base_up[num]);
	}
	else
	{
		len += ft_printhex(num / 16, hex);
		len += ft_printhex(num % 16, hex);
	}
	return(len);
}
