/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:18:14 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:03:06 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
	if (a == '6' && b == '8' && c == '9')
	{
		a = a + 1;
		print_char(a, b, c);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '7')
	{
		while (b < '8')
		{
			while (c < '9')
			{
				print_char(a, b, c);
				c = c + 1;
			}
			print_char(a, b, c);
			b = b + 1;
			c = b + 1;
		}
		print_char(a, b, c);
		a = a + 1;
		b = a + 1;
		c = b + 1;
	}
}
