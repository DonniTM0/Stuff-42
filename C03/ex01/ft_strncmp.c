/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:04:30 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/19 20:44:31 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	i;
	char	*s1;
	char	*s2;
	int	value_ft;
	int	value_real;

	i = 3;
	s1 = "Vhange";
	s2 = "Mozart";
	value_ft = ft_strncmp(s1, s2, i);
	value_real = strncmp(s1, s2, i);
	printf("ft_strncmp: %d\n", value_ft);
	printf("strncmp: %d\n", value_real);
	return (0);
}
*/
