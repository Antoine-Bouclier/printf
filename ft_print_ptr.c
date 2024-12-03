/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:18:10 by abouclie          #+#    #+#             */
/*   Updated: 2024/12/03 13:49:57 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrlen(uintptr_t n)
{
	int	i;

	i = 0;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	if (n < 16)
		i++;
	return (i);
}

static char	*ft_itoa_ptr(uintptr_t n, char *base)
{
	int			i;
	int			size;
	char		*str;

	i = 0;
	size = ft_ptrlen(n);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	while (size-- > i)
	{
		str[size] = base[n % 16];
		n /= 16;
	}
	return (str);
}

int	ft_print_ptr(unsigned long long n)
{
	int		length;
	char	*nb;

	length = 0;
	if (!n)
	{
		ft_putstr(("(nil)"));
		return (5);
	}
	else if (n == 0)
		length += write(1, "0", 1);
	else
	{
		length = 2;
		write(1, "0x", 2);
		nb = ft_itoa_ptr(n, "0123456789abcdef");
		length += ft_printstr(nb);
	}
	free(nb);
	return (length);
}
