/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:08:50 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/11 17:20:51 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

int	printf_strlen(char *s);
int	printf_putchar(char c);
int	printf_putstr(char *s);
int	printf_putaddr(unsigned long long p);
int	printf_putnbr_base(int nbr, char *base);
int	printf_pnbr(unsigned int nbr, char *base);
int	ft_printf(const char *str, ...);

#endif