/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:35:24 by glacroix          #+#    #+#             */
/*   Updated: 2022/12/14 16:21:53 by glacroix         ###   ########.fr       */
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
int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}
