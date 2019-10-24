/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:27:49 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/24 16:28:58 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c
			== '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		n;
	int		i;
	int		r;

	n = 0;
	i = 1;
	r = 0;
	while (ft_space(str[n]))
		n++;
	while (str[n] != '\0')
	{
		while (str[n] == 43 || str[n] == 45)
		{
			if (str[n] == 45)
				i = i * -1;
			n++;
		}
		while (str[n] >= '0' && str[n] <= '9')
		{
			r = ((r * 10) + (str[n] - '0'));
			n++;
		}
		return (r * i);
	}
	return (0);
}
