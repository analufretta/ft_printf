/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:19:03 by afretta-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/11/21 14:29:20 by afretta-         ###   ########.fr       */
=======
/*   Updated: 2025/11/25 18:45:34 by afretta-         ###   ########.fr       */
>>>>>>> 22031a5 (lon unsigned)
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(long unsigned nb)
{
	int	len;

	len = ft_printdi(nb);
	return (len);
}
