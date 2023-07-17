/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 05:36:18 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/05/06 16:27:23 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rem;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d, %d", a, b);
// }
