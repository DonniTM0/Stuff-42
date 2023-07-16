/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:51:37 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/15 13:58:15 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "123";
	char str3[] = "";

	int result1 = ft_str_is_alpha(str1);
	int result2 = ft_str_is_alpha(str2);
	int result3 = ft_str_is_alpha(str3);

	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n", result3);

	return (0);
}*/
