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

void	ft_putstr(char *str)
{
	int	char_count;

	char_count = 0;
	while (str[char_count] != '\0')
	{
		write(1, &str[char_count], 1);
		char_count++;
	}
}

/*
int	main(void)
{
	char	line1[] = "        :::      ::::::::";
	char	line2[] = "      :+:      :+:    :+:";
	char	line3[] = "    +:+ +:+         +:+  ";
	char	line4[] = "  +#+  +:+       +#+     ";
	char	line5[] = "+#+#+#+#+#+   +#+        ";
	char	line6[] = "     #+#    #+#          ";
	char	line7[] = "    ###   ########.fr    ";

	ft_putstr(line1);
	write(1, "\n", 1);
	ft_putstr(line2);
	write(1, "\n", 1);
	ft_putstr(line3);
	write(1, "\n", 1);
	ft_putstr(line4);
	write(1, "\n", 1);
	ft_putstr(line5);
	write(1, "\n", 1);
	ft_putstr(line6);
	write(1, "\n", 1);
	ft_putstr(line7);
	write(1, "\n", 1);
	return (0);
}
*/
