/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:41:30 by dmisini           #+#    #+#             */
/*   Updated: 2023/07/12 16:42:35 by dmisini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	dividend = 20;
	int	divisor = 3;
	int	quotient = 0;
	int	remainder = 0;
	ft_div_mod(dividend, divisor, &quotient, &remainder);
	printf("Quotient: %d, Remainder: %d\n", quotient, remainder);
	return 0;
}*/
