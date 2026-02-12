/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:20:52 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/16 15:39:48 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char fuente[] = "Holitas";
	char destino[20] = "";
	
	printf("El string destino debería estar vacío: <%s>\n", destino);
	ft_strcpy(destino, fuente);
	printf("El string destino debería contener: <%s>\n", destino );
	return (0);
}*/
