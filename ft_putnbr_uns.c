/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:35:24 by glacroix          #+#    #+#             */
/*   Updated: 2022/12/14 16:20:18 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * It takes an unsigned int and prints it to the screen
 * 
 * @param nbr the number to be printed
 * 
 * @return The number of characters printed.
 */
int	ft_putnbr_uns(unsigned int nbr)
{
	int	n;

	n = 0;
	if (nbr > 9)
	{
		n += ft_putnbr_uns(nbr / 10);
	}
	return (n += ft_putchar(nbr % 10 + '0'));
}
