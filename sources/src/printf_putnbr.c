/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:19:08 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/11 13:28:40 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// int	printf_putnbr(int n)
// {
// 	char		c;
// 	long int	nb;
// 	int			len;

// 	nb = n;
// 	len = 0;
// 	if (nb < 0)
// 	{
// 		len += printf_putchar('-');
// 		nb = -nb;
// 	}
// 	if (nb > 9)
// 	{
// 		len += printf_putnbr(nb / 10);
// 	}
// 	c = (char) '0' + nb % 10;
// 	len += printf_putchar(c);
// 	return (len);
// }

int	printf_putnbr_base(int nbr, char *base)
{
	int		length_base;
	char	c;
	long	nb;
	int		len;

	nb = nbr;
	len = 0;
	length_base = printf_strlen(base);
	if (nb < 0)
	{
		len += printf_putchar('-');
		nb = -nb;
	}
	if (nb > length_base - 1)
	{
		len += printf_putnbr_base((int)(nb / length_base), base);
	}
	c = base[nb % length_base];
	len += printf_putchar(c);
	return (len);
}
