#include <stdio.h>

void	ft_reversed_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;
	int dgr;
	int swap;
	/*i = 0;
	swap = 0;
	while(i < size - 1)
	{	
		if(tab[i] > tab[i + 1])
		{
			dgr = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = dgr;
			swap = 1;
		}
		i++;
	}

	if(swap)
		ft_reversed_int_tab(tab, size - 1);*/

	while (1)
	{
		swap = 0;
		i = 0;
		while(i < size - 1)
        	{
                	if(tab[i] > tab[i + 1])
                	{
                        	dgr = tab[i + 1];
                        	tab[i + 1] = tab[i];
                        	tab[i] = dgr;
                        	swap = 1;
                	}
                	i++;
        	}

		if(!swap)
			break;

		size--;
	}
}

int main()
{
	int tab[] = {4,2,3,1,7,6,3};
	int n = 7;

	ft_reversed_int_tab(tab, n);
	
	int i;
	i = 0;
	while(i < n)
		printf("%d", tab[i++]);

	return (0);
}
