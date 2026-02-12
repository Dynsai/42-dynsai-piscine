/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:42:25 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/20 15:06:03 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	char	ponteenminuscula[] = "PONTEENMINUSCULA";

	printf("Las letras iniciales en minuscula: %s.\n", 
			ponteenminuscula);
	printf("Las letras tras usar la funcion ft_strupcase: %s.\n", 
			ft_strlowcase(ponteenminuscula));
	return (0);
}*/
