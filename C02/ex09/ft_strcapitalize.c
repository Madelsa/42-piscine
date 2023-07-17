/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:02:56 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:11:10 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_str_to_lower(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] += 32;
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_str_to_lower(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "hI, ThIs iS eXerCise eX09";
// 	printf("%s", ft_strcapitalize(str));
// }
