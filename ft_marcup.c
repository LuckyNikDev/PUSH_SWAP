#include "push_swap.h"

int	ft_markup_util_one(t_list *bag_pointer, t_one *pointer)
{
	int		quantity_list;
	t_list	*bag_pointer_next;

	quantity_list = pointer->quantity_number - 1;
	bag_pointer->mark = 1;
	bag_pointer_next = bag_pointer->next;
	while (quantity_list--)
	{
		if (bag_pointer_next == NULL)
			bag_pointer_next = pointer->list_pointerA;
		if (bag_pointer->order <= bag_pointer_next->order)
		{
			bag_pointer_next->mark = 1;
			bag_pointer = bag_pointer_next;
			bag_pointer_next = bag_pointer_next->next;
		}
		else
		{
			bag_pointer_next->mark = 0;
			bag_pointer_next = bag_pointer_next->next;
		}
	}
	return (ft_quantity_one(pointer));
}

int	ft_quantity_one(t_one *pointer)
{
	int		result;
	t_list	*local_pointer;

	result = 0;
	local_pointer = pointer->list_pointerA;
	while (local_pointer)
	{
		if (local_pointer->mark == 1)
			result++;
		local_pointer = local_pointer->next;
	}
	return (result);
}

void	ft_last_markup(t_one *pointer, int max)
{
	t_list	*bag_pointer;

	pointer->quantity_one = max;
	bag_pointer = pointer->list_pointerA;
	while (bag_pointer)
	{
		if (bag_pointer->quantity_one == max)
		{
			ft_markup_util_one(bag_pointer, pointer);
			break ;
		}
		bag_pointer = bag_pointer->next;
	}
}
