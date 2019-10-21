/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:20:35 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/09 14:37:04 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);

void	ft_putnbr(int number);

void	ft_putnbr(int number)
{
	if (number > -2147483647 && number < 2147483647)
	{
		if (number < 0)
		{
			ft_putchar(45);
			number = -number;
		}
		if (number >= 10)
		{
			ft_putnbr(number / 10);
			ft_putnbr(number % 10);
		}
		else
		{
			ft_putchar(number + 48);
		}
	}
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
