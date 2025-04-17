/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:07:09 by esduman           #+#    #+#             */
/*   Updated: 2025/04/16 13:07:49 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	start;
	int	finish;

	start = 0;
	finish = size - 1;
	while (start < finish)
	{
		tmp = tab[start];
		tab[start] = tab[finish];
		tab[finish] = tmp;
		start++;
		finish--;
	}
}
