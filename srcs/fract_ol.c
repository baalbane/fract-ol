#include "../fract_ol"

int		setvariable(t_list *lst)
{
	if (lst->id == 1)
	{
		lst->ca = mousea;
		lst->cb = mouseb;
	}
	return (1);
}

t_list	*createlst(char **av)
{
	t_list 	*lst;
	
	lst = malloc(sizeof(t_list));
	lst->zoom = 2.0;
	if (av[1][0] == 'M')
		lst->id = 0;
	else if (av[1][0] == 'J')
		lst->id = 1;
	return (lst);
}

int		put_fractal(t_list *lst)
{
	int		x;
	int		y;
	
	y = -1;
	while (++y < HEIGHT)
	{
		x = -1;
		while (++x < WIDTH)
		{
			
			int	a = mapp(x, 0, WIDTH, -ZOOM, ZOOM);
			int	b = mapp(x, 0, WIDTH, -ZOOM, ZOOM);
			
			if (lst->id == 0)
			{
				lst->ca = a;
				lst->cb = b;
			}
			
			int	n = 0;
			
			while (n < PRECISION)
			{
				int aa = a * a - b * b;
				int	bb = 2.0 * a * b;
				a = aa + ca;
				b = bb + cb;
				if (a + b > 16)
					break;
				n++;
			}
			
			//set color (based on n??)
			//put pixel;
			
			
		}
	}
	return (1);
}


int		main(int ac, char **av)
{
	int		continuer = 0;
	t_list *lst;
	
	if (ac != 2)
	{
		printf("ERROR PRINTF CARE NO ARG\n");
		return (0);
	}
	else
	{
		if (av)
			;
		lst = createlst(av);
		while (continuer)
		{
			setvariable(lst);
			put_fractal(t_list);
		}
	}
	//free();
}




























