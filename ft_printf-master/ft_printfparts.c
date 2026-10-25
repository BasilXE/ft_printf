/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfparts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:13:53 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/25 16:13:53 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putunsigned(int u, size_t i)
{
	unsigned int n;
	char	m;
	
	n = (unsigned int)u;
	if (n > 9)
		ft_putnbr(n / 10, i);
	m = n % 10 + '0';
	write (1, &m, 1);
	i++;
	return (i);
}
size_t	ft_putvoid(void *p, size_t i)
{
	write(1, (void *)&p, 1);
	return (++i);
}
size_t	ft_putlowhexa(unsigned int x, i)
{
	unsigned int k;
	char *c;

	k = x % 16;
	c = "0123456789abcdef";
	
}