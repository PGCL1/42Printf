/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formulas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:35:24 by glacroix          #+#    #+#             */
/*   Updated: 2022/12/13 18:17:51 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It writes a single character to the standard output
 * 
 * @param c the character to print
 * 
 * @return The return value is the number of bytes written.
 */
int ft_putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * It counts the number of characters in a string.
 * 
 * @param str This is the string that we want to find the length of.
 * 
 * @return The length of the string.
 */
int ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

/**
 * Ft_putstr() takes a string as an argument and writes it to the standard output
 * 
 * @param str The string to be printed.
 * 
 * @return The number of characters printed.
 */
int ft_putstr(char *str)
{
	unsigned int x;

	x = 0;
	if (!str)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

/**
 * It prints the number given to it.
 * 
 * @param nbr the number to be printed
 * 
 * @return The number of characters printed.
 */
int ft_putnbr(int nbr)
{
	unsigned int n;

	n = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		n += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		n += ft_putnbr(nbr / 10);
		n += ft_putchar(nbr % 10 + '0');
	}
	else
		n += ft_putchar(nbr + '0');
	return (n);
}

/**
 * It takes an unsigned int and prints it to the screen
 * 
 * @param nbr the number to be printed
 * 
 * @return The number of characters printed.
 */
int ft_putnbr_uns(unsigned int nbr)
{
	int n;
	
	n = 0;
	if (nbr > 9)
	{
		n += ft_putnbr_uns(nbr/10);
	}
	return (n += ft_putchar(nbr % 10 + '0'));
}

int ft_putnbr_hex(unsigned int n, char *base)
{
    int nbr_final[16];
    int i;
    int result;
    i = 0;
    result = 0;
    if (n == 0)
        result += ft_putchar('0');
    while (n && n > 0)
    {
        nbr_final[i] = n % 16;
        n = n / 16;
        i++;
    }
    while (--i >= 0)
        result += ft_putchar(base[nbr_final[i]]);
    return (result);
}

int ft_pointer(size_t n, char *base)
{
	size_t nbr_final[16];
	int result;
	int i;

	i = 0;
	result = 0;
    if (n == 0)
		result += write(1, "0x0", 3);
	if (n != 0)
		result += write(1, "0x", 2);
    while (n)
    {
        nbr_final[i] = n % 16;
        n = n / 16;
        i++;
    }
    while (--i >= 0)
        result += ft_putchar(base[nbr_final[i]]);
    return (result);
}