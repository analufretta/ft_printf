/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afretta- <afretta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:33:51 by afretta-          #+#    #+#             */
/*   Updated: 2025/11/20 15:43:11 by afretta-         ###   ########.fr       */
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
int	ft_printstr(char *str); //FIXME
int	ft_printdi(long num); //FIXME
int	ft_printu(long nb); //FIXME
int	ft_printhex(unsigned long num, char hex);//TODO
int	ft_printp(); //TODO

#endif
