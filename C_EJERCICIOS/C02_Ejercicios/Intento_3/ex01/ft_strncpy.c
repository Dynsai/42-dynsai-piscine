/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:38:22 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/16 19:13:21 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char	fuente[] = "Holitas";
	char	destino[10];
	unsigned int num = 3;

	if (num == 1) printf("El primer char del string 
	'%s' es: %s", fuente, ft_strncpy(destino, fuente, num));
	else printf("Los %d primeros char del string 
	'%s' son: %s", num, fuente, ft_strncpy(destino, fuente, num));
	return (0);
}*/
