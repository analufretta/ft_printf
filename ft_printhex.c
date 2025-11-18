/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:02:57 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/18 17:22:04 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printhex(unsigned int num, char hex)
{
	int		len;
	char	*base_low;
	char	*base_up;

	base_low = "0123456789abcdef";
	base_up = "0123456789ABCDEF";
	len = 0;
	if (hex == 'x')
	{
		//TDOD: putnbr/ itoa base 16 lowercar
	}
	else if (hex == 'X')
	{
		//TODO: pritnnber base 16 upercase
	}
	return (len);
}
