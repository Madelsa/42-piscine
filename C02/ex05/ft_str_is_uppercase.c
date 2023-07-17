/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:00:35 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/05/07 19:12:41 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				i++;
			else
				return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
//     char str[] = "MIUHWUNDO";
//     printf("%d", ft_str_is_uppercase(str));
// }
