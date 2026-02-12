/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:13:39 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/16 16:15:53 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
}
/* #include <stdio.h>
int main(void)
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7 };
    int size = sizeof(tab) / sizeof(tab[0]);
    
    printf("Original: ");
    for (int i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("Revertido: ");
    for (int i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}*/
