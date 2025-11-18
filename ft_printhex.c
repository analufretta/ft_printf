/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:02:57 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/18 16:08:49 by afretta-         ###   ########.fr       */
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
	}
	else if (hex == 'X')
	{
	}
	return (len);
}
