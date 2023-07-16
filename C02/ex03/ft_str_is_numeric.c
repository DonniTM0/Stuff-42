/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:02:52 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/15 15:33:42 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "12345";
	char str2[] = "Hello";
	char str3[] = "";

	int result1 = ft_str_is_numeric(str1);
	int result2 = ft_str_is_numeric(str2);
	int result3 = ft_str_is_numeric(str3);

	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n", result3);

	return (0);
}*/
