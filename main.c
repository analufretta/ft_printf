/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:14:33 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/20 16:32:08 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int	main(void)
{
	char *str = NULL;
	char str1[] = "Ana Luiza";
	//char
	printf("P Charachter: %c\n", 'c');
	ft_printf("FT Charachter: %c\n", 'c');

	//string
	printf("P String NULL: %s\n", str);
	ft_printf("FT String NULL: %s\n", str);
	printf("P hello, %s\n", str1);
	ft_printf("P hello, %s\n", str1);
	

	//dig-int
	printf("P 42: %d\n", 42);
	printf("P INT_MAX: %d\n", INT_MAX);
	printf("P INT_MIN: %d\n", INT_MIN);
	ft_printf("FT 42: %d\n", 42);
	ft_printf("FT INT_MAX: %d\n", INT_MAX);
	ft_printf("FT INT_MIN: %d\n", INT_MIN);
	printf("P 42: %i\n", 42);
	printf("P INT_MAX: %i\n", INT_MAX);
	printf("P INT_MIN: %i\n", INT_MIN);
	ft_printf("FT 42: %i\n", 42);
	ft_printf("FT INt_MAX: %i\n", INT_MAX);
	ft_printf("FT INt_MIN: %i\n", INT_MIN);
	
	//uns
	printf("P 42: %u\n", 42);
	printf("P INT_MAX: %u\n", INT_MAX);
	printf("P INT_MIN: %u\n", INT_MIN);
	ft_printf("FT 42: %u\n", 42);
	ft_printf("FT INT_MAX: %u\n", INT_MAX);
	ft_printf("FT INT_MIN: %u\n", INT_MIN);
}
