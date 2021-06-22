#include "push_swap.h"

void	ft_quantity_numbers(t_one *pointer)
{
	int		i;
	char	*mas;

	mas = (pointer->argv)[1];
	i = 0;
	while (mas[i])
	{
		if ((mas[i] < '0' || mas[i] > '9') && (mas[i] != ' ') && \
		(mas[i] != '\0') && mas[i] != '-' && mas[i] != '+')
		{
			pointer->error = 1;
			return ;
		}
		i = ft_quantity_numbers_util(pointer, i);
	}	
}

void	ft_create_mas(t_one *pointer)
{
	pointer->mas = malloc(sizeof(int) * (pointer->quantity_number));
	if (pointer->mas)
		ft_fullin_mas(pointer);
	else
		pointer->error = 1;
}

void	ft_fullin_mas(t_one *pointer)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (pointer->argv)[1];
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9' && str[i] != '\0') \
		|| (str[i] == '-' || str[i] == '+'))
		{
			(pointer->mas)[j] = ft_atoi(&str[i], pointer);
			j++;
			while ((str[i] >= '0' && str[i] <= '9' && str[i] != '\0') \
			|| (str[i] == '-' || str[i] == '+'))
				i++;
		}
		while (str[i] == ' ' && str[i] != '\0')
			i++;
	}
	if (!(pointer->error))
		ft_check_duplicate(pointer);
}

void	ft_check_duplicate(t_one *pointer)
{
	int	i;
	int	*mas;
	int	buf;
	int	j;

	j = 0;
	mas = pointer->mas;
	i = pointer->quantity_number - 1;
	while (i)
	{
		buf = mas[i];
		while (j < i)
		{
			if (mas[j] == buf)
			{
				pointer->error = 1;
				return ;
			}
			j++;
		}
		j = 0;
		i--;
	}
}

int	ft_check_sort(t_one *pointer)
{
	int	quantity_number;
	int	i;
	int	j;
	int	result;

	result = 1;
	j = 1;
	i = 0;
	quantity_number = pointer->quantity_number - 1;
	while (quantity_number)
	{
		if ((pointer->mas)[i] > (pointer->mas)[j])
			result = 0;
		i++;
		j++;
		quantity_number--;
	}
	return (result);
}
