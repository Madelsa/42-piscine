/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:53:00 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:29:34 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	get_abs_length(int min, int max)
{
	int	length;

	length = (max - min);
	if (length < 0)
		length *= -1;
	return (length);
}

int	*ft_range(int min, int max)
{
	int	length;
	int	*ptr_int;
	int	i;

	ptr_int = NULL;
	if (min >= max)
		return (ptr_int);
	i = 0;
	length = get_abs_length(min, max) + 1;
	ptr_int = (int *)malloc(length * sizeof(int));
	if (ptr_int == NULL)
		return (NULL);
	while (min < max)
	{
		ptr_int[i] = min;
		min++;
		i++;
	}
	return (ptr_int);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;

// 	min = 3;
// 	max = 7;
// 	ft_range(min, max);
// }
