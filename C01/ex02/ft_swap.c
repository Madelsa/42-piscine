/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:01:58 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/05/06 16:20:44 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 5;
// 	y = 10;
// 	printf("x: %d, y: %d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("x: %d, y: %d\n", x, y);
// }
