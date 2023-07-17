/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 06:57:40 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/05/06 16:30:21 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size -= 1;
	while (size > i)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

// int	main(void)
// {
// 	int	tab[] = [1, 2, 3, 4, 5]; ;
// 	int	size;

// 	tab[5] = [1, 2, 3, 4, 5];
// 	size = 5;
// 	ft_rev_int_tab(tab, size);
// 	printf("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
// }
