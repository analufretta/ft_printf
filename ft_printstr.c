/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:56:49 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/18 16:19:53 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	fr_printstr(char *str)
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
