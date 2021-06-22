#include "push_swap.h"

void	ft_engine(t_one *pointer)
{
	ft_markup(pointer);
	if (pointer->quantity_one == pointer->quantity_number)
	{
		ft_check_sort_finel(pointer);
		return ;
	}
	if (pointer->quantity_number == 3)
	{
		ft_sort_three_elems(pointer);
		return ;
	}
	ft_ALLpush_to_B(pointer);
	ft_final_block(pointer);
	ft_check_sort_finel(pointer);
}

void	ft_markup(t_one *pointer)
{
	t_list	*bag_pointer;
	int		result_one;
	int		max;

	max = 0;
	bag_pointer = pointer->list_pointerA;
	while (bag_pointer)
	{
		result_one = ft_markup_util_one(bag_pointer, pointer);
		if (result_one > max)
			max = result_one;
		bag_pointer->quantity_one = result_one;
		bag_pointer = bag_pointer->next;
	}
	ft_last_markup(pointer, max);
}

void	ft_ALLpush_to_B(t_one *pointer)
{
	int		quantity;
	t_list	*bag_pointer;

	quantity = pointer->quantity_number - pointer->quantity_one;
	bag_pointer = pointer->list_pointerA;
	while (quantity)
	{
		if (bag_pointer->mark == 0)
		{
			quantity--;
			ft_push_to_B(pointer);
			bag_pointer = pointer->list_pointerA;
		}
		else
		{
			ft_rotate_A(pointer, 1);
			bag_pointer = pointer->list_pointerA;
		}
	}
}

void	ft_final_block(t_one *pointer)
{
	t_list	*bag_pointer;

	bag_pointer = pointer->list_pointerB;
	while (bag_pointer)
	{
		ft_optimal_element(pointer);
		ft_moving_from_B_to_A(pointer);
		ft_to_zero_struct(pointer);
		bag_pointer = pointer->list_pointerB;
	}
}

void	ft_check_sort_finel(t_one *pointer)
{
	t_list	*bag_pointer;
	int		counter;

	counter = 0;
	if (pointer->list_pointerA->order != 1)
	{
		bag_pointer = pointer->list_pointerA;
		while (bag_pointer)
		{
			counter++;
			if (bag_pointer->order == 1)
				break ;
			bag_pointer = bag_pointer->next;
		}
		bag_pointer = pointer->list_pointerA;
		if (counter <= (pointer->quantity_number / 2))
			ft_check_sort_finel_util(pointer, 1);
		else
			ft_check_sort_finel_util(pointer, 0);
	}
}
