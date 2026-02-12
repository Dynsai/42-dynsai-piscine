/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:28:24 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/16 11:51:05 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main()
{
	int l;
	int cadena[] = { 5, 2, 8, 4, 9 };

	l = 0;
	while(cadena[l]) l++;
	ft_sort_int_tab(cadena, l);
	for (int i = 0; i < l; i++)
        printf("%d ", cadena[i]);
	return (0);
}*/
