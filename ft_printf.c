/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:18:11 by abouclie          #+#    #+#             */
/*   Updated: 2024/12/03 14:04:58 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_formats(va_list args, char c)
{
	int	length;

	length = 0;
	if (c == 'c')
		length += ft_printchar(va_arg(args, int));
	else if (c == 's')
		length += ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		length += ft_printnbr(va_arg(args, int), "0123456789");
	else if (c == 'u')
		length += ft_printnbr(va_arg(args, unsigned int), "0123456789");
	else if (c == 'x')
		length += ft_printnbr(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		length += ft_printnbr(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
	{
		write(1, "%", 1);
		length = 1;
	}
	else
		return (-1);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (!str[i])
			return (-1);
		if (str[i] == '%' && str[i] != '\0')
		{
			length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
