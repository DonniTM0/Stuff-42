/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:36:02 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/16 16:08:45 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	*str1 = "bruh";
	char	*str2 = "Bruh";
	char	*str3 = "BRUH";
	char	*str4 = "";

	printf("'%s' %d\n", str1, ft_str_is_lowercase(str1));
	printf("'%s' %d\n", str2, ft_str_is_lowercase(str2));
	printf("'%s' %d\n", str3, ft_str_is_lowercase(str3));
	printf("'%s' %d\n", str4, ft_str_is_lowercase(str4));

	return 0;
}*/
