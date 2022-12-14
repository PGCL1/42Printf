/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:35:24 by glacroix          #+#    #+#             */
/*   Updated: 2022/12/14 16:18:59 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It takes a number and a base, and prints the number in the base
 * 
 * @param n the number to be converted
 * @param base the base to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_pointer(size_t n, char *base)
{
	size_t	nbr_final[16];
	int		result;
	int		i;

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
