#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_one	*pointer;

	pointer = ft_create_listone(argc, argv);
	if (pointer)
	{
		if (argc == 2)
			ft_two_arguments(pointer);
		else if (argc > 2)
			ft_many_arguments(pointer);
		if (pointer->error)
			write(1, "error\n", 6);
		if (pointer->mas)
			free(pointer->mas);
		if (pointer->list_pointerA || pointer->list_pointerB)
			ft_free_list(pointer);
		free(pointer);
	}
	else
		write(1, "error\n", 6);
}

void	ft_many_arguments(t_one *pointer)
{
	ft_quantity_bytes(pointer);
	ft_create_single_mas(pointer);
}

void	ft_two_arguments(t_one *pointer)
{
	ft_quantity_numbers(pointer);
	if (pointer->quantity_number == 1)
		return ;
	if (pointer->quantity_number == 0 && !(pointer->error))
	{
		write(1, "\n", 1);
		return ;
	}
	if (!(pointer->error))
		ft_create_mas(pointer);
	if (pointer->flag_usetwoway)
		free((pointer->argv)[1]);
	if (!(pointer->error))
		ft_last(pointer);
}

void	ft_last(t_one *pointer)
{
	if (ft_check_sort(pointer))
		return ;
	ft_create_list(pointer);
}

void	ft_create_list(t_one *pointer)
{
	ft_crate_and_full_value_to_list(pointer);
	if (!(pointer->error))
	{
		ft_sort_mas(pointer);
		ft_full_order_to_list(pointer);
		ft_engine(pointer);
	}
}
