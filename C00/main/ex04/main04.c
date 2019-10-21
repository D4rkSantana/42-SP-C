/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:40:20 by esilva-s          #+#    #+#             */
/*   Updated: 2019/10/16 17:11:18 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_is_negative(int n);

int	main()
{
	printf("--Teste 1: Resultado esperado: N ; Resultado Obtido: \n");
	ft_is_negative(-1);
	printf("\n");
	printf("--Teste 2: Resultado esperado: P ; Resultado Obtido: \n");	
	ft_is_negative(0);
	printf("\n");
	printf("--Teste 3: Resultado esperado: P ; Resultado Obtido: \n");
	ft_is_negative(1);
	printf("\n");
}
