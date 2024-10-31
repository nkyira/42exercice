/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <jodavis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:51:16 by jodavis           #+#    #+#             */
/*   Updated: 2024/10/31 17:18:56 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprinft.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;

	va_start(arg, argcount(format));
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		else if (*format == '\\')
		{
			format++;
		}
		else
		{
			write(1, format, 1);
		}
		format++;
	}
}

int	argcount(const char *format)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
			count++;
		format++;
	}
	return (count);
}
