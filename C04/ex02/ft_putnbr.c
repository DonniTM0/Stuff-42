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

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	long_int;

	long_int = nb;
	if (long_int < 0)
	{
		ft_putchar('-');
		long_int = -long_int;
	}
	if (long_int > 9)
	{
		ft_putnbr(long_int / 10);
	}
	ft_putchar(long_int % 10 + '0');
}

/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
