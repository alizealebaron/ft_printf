/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:19:14 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/11 13:09:17 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printf_putstr(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (printf_putstr("(null)"));
	while (*s)
		len += printf_putchar(*s++);
	return (len);
}
