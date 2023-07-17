/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:20:58 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:24:37 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i > 46340)
			return (0);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int x;
// 	x = 25;

// 	printf("%d", ft_sqrt(x));
// }