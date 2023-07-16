/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:51:56 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/13 18:56:51 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	arrSize = sizeof(arr) / sizeof(arr[0]);	
	ft_rev_int_tab(arr, arrSize);
	printf("Reversed Array: ");
	for (int i = 0; i < arrSize; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}*/
