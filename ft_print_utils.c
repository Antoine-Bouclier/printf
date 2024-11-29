/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:50:42 by abouclie          #+#    #+#             */
/*   Updated: 2024/11/29 14:51:28 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr (char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr(("(null)"));
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}

int	ft_printnbr (long int n, char *base)
{
	char	*nb;

	nb = ft_itoa_base(n, base);
	return (ft_printstr(nb));
}