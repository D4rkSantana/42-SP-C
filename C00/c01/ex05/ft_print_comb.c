/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:06:58 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/08 17:07:09 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		first;
	int		second;
	int		third;

	first = 47;
	while (++first <= 55)
	{
		second = first;
		while (++second <= 56)
		{
			third = second;
			while (++third <= 57)
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				if (first != 55)
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
		}
	}
}
