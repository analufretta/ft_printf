/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:01:45 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/21 14:29:47 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdi(long num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		num = num * (-1);
		len += ft_printchar('-');
	}
	if (num > 9)
		len += ft_printdi(num / 10);
	len += ft_printchar(num % 10 + '0');
	return (len);
}
