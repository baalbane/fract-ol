#include "../fract_ol"

int		map_value(t_list *lst)
{
	int		i;
	int		j;
	double	min;
	double	max;
	double	nb;
	
	min = (double)lst->min;
	max = (double)lst->max;
	i = -1;
	while (lst->map[++i] != NULL)
	{
		j = -1;
		while (++j < lst->xlen)
		{
			nb = (double)lst->map[i][j];
			nb = (nb + (0 - min)) / (max - min) * PRECISION;
			lst->map[i][j] = (int)nb;
		}
	}
	return (1);
}

int		is_number(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

int		is_space(char a)
{
	if (a == ' ' || a == '\v' || a == '\r'
		|| a == '\f' || a == '\t')
		return (1);
	return (0);
}

int		is_empty(char *a)
{
	while (*a == ' ' || *a == '\v' || *a == '\r'
		|| *a == '\f' || *a == '\t')
		a++;
	if (*a == '\0')
		return (1);
	return (0);
}

char	*ft_strchr(char *s, int c)
{
	while (*s != c && *s)
		s++;
	if (*s == c)
		return (s);
	return (NULL);
}

int		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] && s)
		i++;
	return (i);
}