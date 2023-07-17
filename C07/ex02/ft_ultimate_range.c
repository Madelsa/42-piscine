/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:51:14 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:29:42 by mabdelsa         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	*ptr_int;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	length = get_abs_length(min, max) + 1;
	ptr_int = (int *)malloc(length * sizeof(int));
	if (ptr_int == NULL)
		return (-1);
	while (min < max)
	{
		ptr_int[i] = min;
		min++;
		i++;
	}
	*range = ptr_int;
	return (i);
}

// int	main(void)
// {
// 	int	i;
// 	int	*tab;
// 	int	min;
// 	int	max;
// 	int	size;

// 	min = 0;
// 	max = 5;
// 	size = ft_ultimate_range(&tab, min, max);
// 	if (tab != NULL)
// 	{
// 		i = -1;
// 		while (++i < max - min)
// 		{
// 			printf("%d\t", tab[i]);
// 		}
// 	}
// 	printf("\nSize:\t%d", size);
// }
