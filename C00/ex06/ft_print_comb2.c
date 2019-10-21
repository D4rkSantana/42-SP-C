/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:26:33 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/09 14:26:43 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first;
	int		second;
	char	letter;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			letter = first / 10 + 48;
			write(1, &letter, 1);
			letter = first % 10 + 48;
			write(1, &letter, 1);
			write(1, " ", 1);
			letter = second / 10 + 48;
			write(1, &letter, 1);
			letter = second % 10 + 48;
			write(1, &letter, 1);
			if (first != 98)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
