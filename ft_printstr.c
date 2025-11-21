/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:56:49 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/21 14:29:28 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		len += write(1, "(null)", 6);
		return (len);
	}
	while (*str)
		len += ft_printchar(*(str++));
	return (len);
}
