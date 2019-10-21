/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:34:46 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/09 13:41:43 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		x;
	char	letra;

	x = 122;
	letra = x;
	while (x >= 97)
	{
		write(1, &letra, 1);
		x--;
		letra = x;
	}
}
