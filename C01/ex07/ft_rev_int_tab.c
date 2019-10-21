/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:42:41 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/12 12:37:38 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a1, int *a2);

void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		*temp1;
	int		*temp2;

	count = 0;
	while (count < (size / 2))
	{
		temp1 = tab + count;
		temp2 = tab + size - count - 1;
		ft_swap(temp1, temp2);
		count++;
	}
}

void	ft_swap(int *a1, int *a2)
{
	int		temp1;

	temp1 = *a1;
	*a1 = *a2;
	*a2 = temp1;
}
