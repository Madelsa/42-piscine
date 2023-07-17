/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:32:03 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:24:17 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

// int	main(void)
// {
// 	int	x;

// 	x = -4;
// 	printf("%d", ft_recursive_factorial(x));
// }
