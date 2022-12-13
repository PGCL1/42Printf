/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formulas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:35:24 by glacroix          #+#    #+#             */
/*   Updated: 2022/12/12 20:27:45 by glacroix         ###   ########.fr       */
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
	write(1, &c, 1);
	return (1);
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
	while (str)
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
char ft_putstr(const char *str)
{
	int x;

	x = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[x])
		x++;
	return (write(1, str, x));
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
	int n;

	n = 0;
	if (nbr == -2147483648)
		write(1, &nbr, 11);
	if (nbr < 0)
	{
		n += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		n += ft_putnbr(nbr/ 10);
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

int	ft_puthex(unsigned long n, char c)
{
	int		a;
	char	*s;

	a = 0;
	if (c == 'X')
		s = "0123456789ABCDEF";
	else
		s = "0123456789abcdef";
	if (c == 'p')
	{
		a += ft_putstr("0x");
		c = 0;
	}
	if (n < 16)
		a += ft_putchar(s[n]);
	else
	{
		a += ft_puthex(n / 16, c);
		a += ft_puthex(n % 16, c);
	}
	return (a);
}