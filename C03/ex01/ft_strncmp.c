/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:56:01 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/21 21:20:32 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				x;

	i = 0;
	x = 0;
	while (x == 0 && (s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		x = s1[i] - s2[i];
		i++;
	}
	return (x);
}
