/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouclie <abouclie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:53:46 by abouclie          #+#    #+#             */
/*   Updated: 2024/12/03 10:32:22 by abouclie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(long int n, char *base);
char	*ft_itoa_base(long int n, char *base);
void	ft_putstr(char *str);
int		ft_print_ptr(unsigned long long n);
int		ft_strlen(char	*str);

#endif