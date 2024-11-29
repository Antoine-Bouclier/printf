/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:23:47 by abouclie          #+#    #+#             */
/*   Updated: 2024/11/29 15:07:39 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(long n, int bsize)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > bsize)
	{
		n = n / bsize;
		i++;
	}
	if (n <= bsize)
		i++;
	return (i);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_itoa_base(long int n, char *base)
{
	int			i;
	int			size;
	int			bsize;
	char		*str;

	i = 0;
	bsize = ft_strlen(base);
	size = ft_intlen(n, bsize);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0 && bsize == 10)
	{
		str[i] = '-';
		n *= -1;
		i++;
	}
	str[size] = '\0';
	while (size-- > i)
	{
		str[size] = base[n % bsize];
		n /= bsize;
	}
	return (str);
}
