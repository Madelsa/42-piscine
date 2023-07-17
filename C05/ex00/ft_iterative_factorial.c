/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:49:55 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:24:13 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	return (0);
}

// int	main(void)
// {
// 	int	x;

// 	x = 4;
// 	printf("%d", ft_iterative_factorial(x));
// }
