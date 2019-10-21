/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:42:02 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/14 19:06:27 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		first_letter;
	int		i;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) ||
			(str[i] >= 97 && str[i] <= 122))
		{
			if (first_letter && (str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;
			else if (!first_letter && (str[i] >= 65 && str[i] <= 90))
				str[i] = str[i] + 32;
			first_letter = 0;
		}
		else
			first_letter = 1;
		i++;
	}
	return (str);
}
