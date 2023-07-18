/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:30:41 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/16 18:31:21 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "HELLO";
    char str4[] = "";

    printf("Original: %s, Uppercase: %s\n", str1, ft_strupcase(str1));
    printf("Original: %s, Uppercase: %s\n", str2, ft_strupcase(str2));
    printf("Original: %s, Uppercase: %s\n", str3, ft_strupcase(str3));
    printf("Original: %s, Uppercase: %s\n", str4, ft_strupcase(str4));

    return 0;
}*/
