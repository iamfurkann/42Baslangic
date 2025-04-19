/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esduman <esduman@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:48:24 by esduman           #+#    #+#             */
/*   Updated: 2025/04/19 18:54:10 by esduman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	i = 0;

	while(str[i])
	{
		if((str[i] >= 'a' && str[i] >= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			return (1);
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char str[] = "merhaba";
	printf("%d", ft_str_is_alpha(str));
	return (0);
}
