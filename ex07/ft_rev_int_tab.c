/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:07:09 by esduman           #+#    #+#             */
/*   Updated: 2025/04/15 16:27:14 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
        int     tmp;
        int     start;
        int     finish;

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

int     main(void)
{
        int sayi[] = {1,2,3,4};
        ft_rev_int_tab(sayi, 4);

        int     i;
        i = 0;
	
        while(i < 4)
        {
                printf("%d", sayi[i]);
                i++;
        }
        return (0);
}
