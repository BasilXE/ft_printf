/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:30:51 by basayoub          #+#    #+#             */
/*   Updated: 2026/10/25 00:23:33 by basayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
size_t	ft_putchar(int c, size_t i)
{
	char h;

	h = (char)c;
	write (1, &h, 1);
	return (++i);
}

size_t	ft_putstr(char *str, size_t j)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (++j);
}

void	iffer(size_t i, va_list	bob, const char *f)
{
	while (f[i])
	{
		if (f[i] == '%' && f[i + 1] == 'c')
			i = ft_putchar(va_arg(bob,int),i);
		else if (f[i] == '%' && f[i + 1] == 's')
			i = ft_putstr(va_arg(bob,char *),i);
		/*else if (f[i] == '%' && f[i + 1] == 'd')

		/*else if (f[i] == '%' && f[i + 1] == 's')

		else if (f[i] == '%' && f[i + 1] == 's')

		else if (f[i] == '%' && f[i + 1] == 's')

		else if (f[i] == '%' && f[i + 1] == 's')

		else if (f[i] == '%' && f[i + 1] == 's')
		
		else if (f[i] == '%' && f[i + 1] == 's')*/
		
		else
			write (1, &f[i], 1);
		i++;
    	}
}

int ft_printf(const char *f, ...)
{
    size_t	i;
    va_list	bob;

    i = 0;
    va_start(bob,f);
    iffer(i,bob,f);
    va_end(bob);
    return (i);
}
int main()
{
	char *u = "the hell";
	ft_printf("the world\n%c\n%s",'k',"str love ");
	printf("\n**** %d", 54);
}