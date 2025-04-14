void	ft_rev_int_tab(int *tab, int size)
{
	int	tut;
	int 	bas;
	int	bitis;

	bas = 0;
	bitis = size - 1;

	while (bas < end)
	{
		tut = tab[bas];
		tab[bas] = tab[bitis];
		tab[bitis] = tut;
		
		bas++;
		bitis--;
	}
}
