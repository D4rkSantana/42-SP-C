/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:47:19 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/10 17:18:21 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a1, int *a2);

void	ft_sort_int_tab(int *tab, int size)
{
	int		count1;
	int		count2;
	int		*temp1;
	int		*temp2;

	count1 = 0;
	while (count1 < size)
	{
		count2 = 0;
		while (count2 < size)
		{
			temp1 = tab + count2;
			temp2 = tab + count2 + 1;
			if (*temp1 > *temp2)
			{
				ft_swap(temp2, temp1);
			}
			count2++;
		}
		count1++;
	}
}

void	ft_swap(int *a1, int *a2)
{
	int		temp1;

	temp1 = *a1;
	*a1 = *a2;
	*a2 = temp1;
}
