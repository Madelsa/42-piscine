/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 09:21:38 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:19:14 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*sub_string;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			sub_string = str + i;
			return (sub_string);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[] = "try to find the needle in this haystack.";
// 	char to_find[] = "this";
// 	printf("%s", ft_strstr(str, to_find));
// }