#include "push_swap.h"

void	ft_quantity_bytes(t_one *pointer)
{
	int	i;

	i = 1;
	while (i < (pointer->argc))
	{
		pointer->bytes += ft_strlen((pointer->argv)[i]);
		i++;
	}
	pointer->bytes += (pointer->argc) - 1;
}

void	ft_create_single_mas(t_one *pointer)
{
	char	*single_mas;

	single_mas = malloc(pointer->bytes);
	if (single_mas)
	{
		ft_complete_single_mas(pointer, single_mas);
		(pointer->argv)[1] = single_mas;
		pointer->flag_usetwoway = 1;
		ft_two_arguments(pointer);
	}
	else
		pointer->error = 1;
}

void	ft_complete_single_mas(t_one *pointer, char *single_mas)
{
	long	i;
	int		j;
	int		k;

	k = 0;
	i = 1;
	j = 0;
	while (i < (pointer->argc))
	{
		while ((pointer->argv)[i][j])
		{
			single_mas[k] = (pointer->argv)[i][j];
			j++;
			k++;
		}
		single_mas[k] = ' ';
		k++;
		j = 0;
		i++;
	}
	i = (pointer->bytes) - 1;
	single_mas[i] = '\0';
}
