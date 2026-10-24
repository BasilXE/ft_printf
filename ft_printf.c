/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:30:51 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/25 00:06:06 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_putchar(int c, size_t i)
{
	char h;

	h = (char)c;
	write (1, &h, 1);
	return (++i);
}

int ft_printf(const char *f, ...)
{
    size_t	i;
    va_list	bob;

    i = 0;
    va_start(bob,f);
    
    while (f[i])
    {
	if (f[i] == '%' && f[i + 1] == 'c')
		i = ft_putchar(va_arg(bob,int),i);
	//else if (f[i] == '%' && f[i + 1] == 'c')
	
	else
	{
		write (1, &f[i], 1);
	}
	i++;
    }
    va_end(bob);
    return (i);
}
int main()
{
	ft_printf("the world %c",'k');
}