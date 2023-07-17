/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 12:03:52 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/05/07 19:12:38 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
				i++;
			else
				return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 			char str[] = "361276317";
// 			printf("%d", ft_str_is_numeric(str));
// }
