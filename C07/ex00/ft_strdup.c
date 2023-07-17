/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:28:11 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:29:29 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	get_length(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr_str;
	int		length;

	i = 0;
	length = get_length(src);
	ptr_str = (char *)malloc(length * sizeof(char));
	if (ptr_str == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		ptr_str[i] = src[i];
		i++;
	}
	ptr_str[i] = '\0';
	return (ptr_str);
}

// int	main(void)
// {
// 	char src[] = "ABC";
// 	printf("%s", ft_strdup(src));
// }