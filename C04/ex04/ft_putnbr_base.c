/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 07:02:06 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:23:42 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_dup(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || (base[i] == '-' || base[i] == '+'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	putnbr_base(int nbr, char *base, int base_val)
{
	char	cnum;

	if (base[0] != '\0' && base[1] != '\0')
	{
		if (nbr < 0)
		{
			nbr *= -1;
			write(1, "-", 1);
		}
		if (nbr > base_val)
		{
			putnbr_base(nbr / base_val, base, base_val);
			putnbr_base(nbr % base_val, base, base_val);
		}
		else
		{
			cnum = base[nbr];
			write(1, &cnum, 1);
		}
	}
}

int	get_length(char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check;
	int	base_val;

	base_val = get_length(base);
	check = check_dup(base);
	if (check == 0)
		putnbr_base(nbr, base, base_val);
}

// int	main(void)
// {
// 	int nums = 912;
// 	char base[] = "01";
// 	ft_putnbr_base(nums, base);
// }