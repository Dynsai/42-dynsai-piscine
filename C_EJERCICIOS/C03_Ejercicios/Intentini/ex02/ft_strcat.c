/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:49:14 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/28 13:38:13 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <unistd.h>
int	main()
{
	char test1[300] = "Hola, ";
	char test2[] = "pedazo de anormal";

	int	l;
	l = 0;
	ft_strcat(test1, test2);
	while (test1[l] != '\0')
	{
		write(1, &test1[l], 1);
		l++;
	}
	return (0);
}*/
