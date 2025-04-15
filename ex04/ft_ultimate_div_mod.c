/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:38 by esduman           #+#    #+#             */
/*   Updated: 2025/04/15 15:26:25 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	esk_dgr;

	esk_dgr = *a;
	*a = *a / *b;
	*b = esk_dgr % *b;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 11;
	b = 6;
	ft_ultimate_div_mod(&a, &b);

	printf("%d %d", a, b);
}
