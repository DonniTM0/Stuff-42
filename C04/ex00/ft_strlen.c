/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <dmisini@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:21:51 by fhess             #+#    #+#             */
/*   Updated: 2023/05/11 19:34:19 by fhess            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	char_counter;

	char_counter = 0;
	while (str[char_counter] != '\0')
	{
		char_counter++;
	}
	return (char_counter);
}
/*
#include <stdio.h>

int main()
{
    char str1[] = "Hello";
    int len1 = ft_strlen(str1);
    printf("Länge von \"%s\": %d\n", str1, len1);

    char str2[] = "Dies ist ein Test";
    int len2 = ft_strlen(str2);
    printf("Länge von \"%s\": %d\n", str2, len2);

    char str3[] = "";
    int len3 = ft_strlen(str3);
    printf("Länge von \"%s\": %d\n", str3, len3);


    char str4[] = " ";
    int len4 = ft_strlen(str4);
    printf("Länge von \"%s\": %d\n", str4, len4);

    return 0;
}
*/
