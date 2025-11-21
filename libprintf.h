/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:33:51 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/21 10:36:15 by afretta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stddef.h> //size_t, NULL
# include <stdlib.h> //malloc, free
# include <unistd.h> // write
# include <limits.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(const char *formtat, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printdi(long num);
int	ft_printu(long nb);
int	ft_printhex(unsigned long num, char hex);
int	ft_printp(void *);

#endif
