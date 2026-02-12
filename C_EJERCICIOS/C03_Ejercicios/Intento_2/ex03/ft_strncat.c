/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:38:43 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/28 13:55:23 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <unistd.h>
int main()
{
    char dest[100] = "Hola, ";
    char src[] = "pedazo de anormal";

    ft_strncat(dest, src, 7);

    int i = 0;
    while (dest[i])
    {
        write(1, &dest[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}*/
