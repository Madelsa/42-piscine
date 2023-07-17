/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 07:59:06 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:33:21 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int width_of_line, char first, char middle, char final);

void	rush(x, y)
{
	int	lines_to_print;

	lines_to_print = 1;
	if (x > 0 && y > 0)
	{
		while (lines_to_print <= y)
		{
			if (lines_to_print == 1)
				ft_putchar(x, 'A', 'B', 'C');
			else if (lines_to_print == y)
				ft_putchar(x, 'C', 'B', 'A');
			else
				ft_putchar(x, 'B', ' ', 'B');
			lines_to_print++;
		}
	}
	else
		write(1, "Values of x and y must be greater than 0", 40);
}
