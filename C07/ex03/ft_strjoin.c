/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:22:21 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:31:34 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_cpy(char *ptr_strs, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	c;
	int	k;

	i = 0;
	j = 0;
	c = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ptr_strs[k++] = strs[i][j++];
		j = 0;
		while (c < size - 1 && sep[j] != '\0')
			ptr_strs[k++] = sep[j++];
		i++;
		c++;
	}
	ptr_strs[k] = '\0';
	return (ptr_strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*ptr_strs;

	i = 0;
	length = get_length(sep) * (size - 1);
	while (i < size - 1)
	{
		length += get_length(strs[i]);
		i++;
	}
	length++;
	if (size <= 0)
		length = 1;
	ptr_strs = (char *)malloc(sizeof(char) * length);
	if (size <= 0)
		return (ptr_strs);
	ft_cpy(ptr_strs, strs, sep, size);
	return (ptr_strs);
}

// int	main(void)
// {
// 	char *strs_strings[] = {"Hello", "World", "One"};
// 	char **strs = strs_strings;
// 	char *sep = " ";
// 	int size;
// 	size = 3;
// 	printf("%s", ft_strjoin(size, strs, sep));
// }