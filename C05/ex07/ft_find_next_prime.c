/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:42:34 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:25:31 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			nb += 1;
			i = 1;
		}
		i++;
	}
	return (nb);
}

// int	main(void)
// {
// 	int x;
// 	x = 23123123;
// 	printf("%d", ft_find_next_prime(x));
// }