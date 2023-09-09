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
	while (str[index] == ' ')
		index++;

	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			operator_sign = -1;
		index++;
	}

	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - 48);
		index++;
	}

	return (operator_sign * result);

*/

int	ft_atoi(char *str)
{
	int	result;
	int	operator_sign;
	int	index;

	result = 0;
	operator_sign = 1;
	index = 0;
	while (str[index] == ' ' || str[index] == '\f' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\t' || str[index] == '\v')
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			operator_sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - 48);
		index++;
	}
	return (operator_sign * result);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str = " ---+--+1234ab567";
    int num = ft_atoi(str);
    printf("%d\n", num);
    return (0);
}
*/
