/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 07:58:56 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:32:39 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int width_of_line, char first, char middle, char final)
{
	int	chars_to_print;

	chars_to_print = 1;
	while (chars_to_print <= width_of_line)
	{
		if (chars_to_print == 1)
			write(1, &first, 1);
		else if (chars_to_print == width_of_line)
			write(1, &final, 1);
		else
			write(1, &middle, 1);
		chars_to_print++;
	}
	write(1, "\n", 1);
}
