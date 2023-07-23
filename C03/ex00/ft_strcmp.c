/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:15:52 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/19 19:45:47 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*s1 = "Bruh";

	char	*s2 = "Bruh";
	char	*s3 = "Hurb";
	char	*s4 = "Hello";

	printf("Comparing %s and %s: %d\n", s1, s2, ft_strcmp(s1, s2));
	printf("Comparing %s and %s: %d\n", s1, s3, ft_strcmp(s1, s3));
	printf("Comparing %s and %s: %d\n", s1, s4, ft_strcmp(s1, s4));

    return 0;
}
*/
