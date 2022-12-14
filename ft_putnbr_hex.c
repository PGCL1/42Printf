/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:35:24 by glacroix          #+#    #+#             */
/*   Updated: 2022/12/14 16:21:41 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It takes an unsigned int and a string of characters, and prints the unsigned int
 * in hexadecimal form using the characters in the string as the base
 * 
 * @param n the number to be converted
 * @param base the base to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_putnbr_hex(unsigned int n, char *base)
{
    int	nbr_final[16];
    int	i;
    int	result;
	
    i = 0;
    result = 0;
    if (n == 0)
        result += ft_putchar('0');
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
