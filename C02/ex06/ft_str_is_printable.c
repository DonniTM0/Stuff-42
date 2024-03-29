/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:26:07 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/16 16:55:36 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 33 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	*str1 = "!@$%";
	char	*str2 = "$&(%^/";
	char	*str3 = "asg75";
	char	*str4 = " ";
	char	*str5 = "";

	printf(" '%s' %d\n", str1, ft_str_is_uppercase(str1));
	printf(" '%s' %d\n", str2, ft_str_is_uppercase(str2));
	printf(" '%s' %d\n", str3, ft_str_is_uppercase(str3));
	printf(" '%s' %d\n", str4, ft_str_is_uppercase(str4));
	printf(" '%s' %d\n", str5, ft_str_is_uppercase(str5));
	return 0;
}*/
