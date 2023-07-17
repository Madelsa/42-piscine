/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:23:54 by mabdelsa          #+#    #+#             */
/*   Updated: 2023/07/17 14:19:35 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	get_src_length(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int	get_dest_length(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	source_length;
	unsigned int	destination_length;

	i = 0;
	j = 0;
	source_length = get_src_length(src);
	destination_length = get_dest_length(dest);
	i = destination_length;
	if (size <= destination_length || size == 0)
		return (0);
	while (src[j] != 0 && j < size - destination_length - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (source_length + destination_length);
}

// int	main(void)
// {
// 	char src[] = "The source";
// 	char dest[] = "I want to add ";
// 	printf("%d\n", ft_strlcat(dest, src, 16));
// 	printf("%s", dest);
// }