/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:06:26 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/05/07 19:12:43 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 32 && str[i] <= 126)
				i++;
			else
				return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
//     char str[] = "mfihuboh$@!#!@pfj";
//     printf("%d", ft_str_is_printable(str));
// }
