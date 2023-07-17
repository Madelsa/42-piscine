/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:28:20 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:02:05 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	send(char c)
{
	write(1, &c, 1);
}

void	do_calc(int i, int j)
{
	send('0' + i / 10);
	send('0' + i % 10);
	write(1, &" ", 1);
	send('0' + j / 10);
	send('0' + j % 10);
	if (!(i == 98 && j == 99))
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			do_calc(i, j);
			j++;
		}
		i++;
	}
}
