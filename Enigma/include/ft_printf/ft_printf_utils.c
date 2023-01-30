/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:44:37 by sfidan            #+#    #+#             */
/*   Updated: 2022/12/27 13:44:38 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int c)
{
	return (write(1, &c, 1));
}

int	ft_hex(unsigned long long n, char fmt)
{
	if (n > 15)
		return (ft_hex(n / 16, fmt) + ft_hex(n % 16, fmt));
	if (fmt == 'x')
		return (ft_char("0123456789abcdef"[n]));
	return (ft_char("0123456789ABCDEF"[n]));
}

int	ft_nbr(int n)
{
	if (n == -2147483648)
		return (ft_str("-2147483648"));
	if (n < 0)
		return (ft_char('-') + ft_nbr(-n));
	if (n > 9)
		return (ft_nbr(n / 10) + ft_nbr(n % 10));
	return (ft_char(n + '0'));
}

int	ft_uint(unsigned int n)
{
	if (n > 9)
		return (ft_uint(n / 10) + ft_uint(n % 10));
	return (ft_char(n + '0'));
}

int	ft_str(char *s)
{
	if (!s)
		return (ft_str("(null)"));
	if (!*s)
		return (0);
	return (ft_char(*s) + ft_str(s + 1));
}
