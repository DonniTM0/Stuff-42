/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:36:16 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/17 14:51:42 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str1[] = "hello";
	char str2[] = "Hello";
	char str3[] = "HELLO";
	char str4[] = "";

	printf("Original: %s Lowercase: %s\n", str1, ft_strlowcase(str1));
	printf("Original: %s Lowercase: %s\n", str2, ft_strlowcase(str1));
	printf("Original: %s Lowercase: %s\n", str3, ft_strlowcase(str1));
	printf("Original: %s Lowercase: %s\n", str4, ft_strlowcase(str1));

    return 0;
}*/
