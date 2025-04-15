/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:21:11 by esduman           #+#    #+#             */
/*   Updated: 2025/04/15 15:13:33 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	dgr;
	
	dgr = *a;
	*a = *b;
	*b = dgr;
}

int	main(void)
{
	int a = 5;
	int b = 2;

	ft_swap(&a, &b);

	printf("%d %d", a, b);
}
