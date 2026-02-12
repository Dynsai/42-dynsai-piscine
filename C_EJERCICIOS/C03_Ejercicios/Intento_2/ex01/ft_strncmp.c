/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:26:02 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/23 14:07:38 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' || *s2 == '\0')
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "Test";
	char s2[] = "Testasasd";
	unsigned int	j = 7;

	printf("%d", ft_strncmp(s1, s2, j));
	return (0);
}*/
