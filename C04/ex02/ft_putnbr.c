/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:22:51 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/24 16:26:52 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursive(unsigned int a)
{
	if (a > 9)
	{
		recursive(a / 10);
	}
	ft_putchar(a % 10 + '0');
}

void	ft_putnbr(int nb)
{
	unsigned int a;

	if (nb < 0)
	{
		a = 0 - nb;
		ft_putchar('-');
	}
	else
	{
		a = nb;
	}
	recursive(a);
}
