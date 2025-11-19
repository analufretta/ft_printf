/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:14:33 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/19 16:38:01 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int	main(void)
{

	printf("Charachter: %c\n", 'c');
	ft_printf("Charachter: %c\n", 'c');

	//dig-int
	printf("42: %d\n", 42);
	printf("INt_MAX: %d\n", INT_MAX);
	printf("INt_MIN: %d\n", INT_MIN);
	ft_printf("42: %d\n", 42);
	ft_printf("INt_MAX: %d\n", INT_MAX);
	ft_printf("INt_MIN: %d\n", INT_MIN);
	printf("42: %i\n", 42);
	printf("INt_MAX: %i\n", INT_MAX);
	printf("INt_MIN: %i\n", INT_MIN);
	ft_printf("42: %i\n", 42);
	ft_printf("INt_MAX: %i\n", INT_MAX);
	ft_printf("INt_MIN: %i\n", INT_MIN);
	//uns
	printf("42: %u\n", 42);
	printf("INt_MAX: %u\n", INT_MAX);
	printf("INt_MIN: %u\n", INT_MIN);
	ft_printf("42: %u\n", 42);
	ft_printf("INt_MAX: %u\n", INT_MAX);
	ft_printf("INt_MIN: %u\n", INT_MIN);
}
