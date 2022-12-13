/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:26:57 by glacroix          #+#    #+#             */
/*   Updated: 2022/12/12 20:27:36 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int		ft_putchar(int c);
int		ft_strlen(char *str);
char	ft_putstr(const char *str);
int		ft_putnbr(int nbr);
int		ft_putnbr_uns(unsigned int nbr);
int		ft_param(char format, va_list arg);
int		ft_printf(const char *format, ...);
int		ft_puthex(unsigned long n, char c);

#endif