#ifndef FDF_H
# define FDF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>

# define HEIGHT 800
# define WIDTH 1000

# define PRECISION 100

typedef struct		s_list
{
	int				id;
	double			ca;
	double			cb;
	double			zoom;
}					t_list;

int		main(int ac, char **av);
int		put_fractal(t_list *lst);
int		setvariable(t_list *lst);
t_list	*createlst(char **av);

#endif