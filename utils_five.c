#include "push_swap.h"

void	ft_swap_A(t_one *pointer)
{
	t_list	*bag_pointer;

	bag_pointer = pointer->list_pointerA->next;
	bag_pointer->next->previous = pointer->list_pointerA;
	pointer->list_pointerA->next = bag_pointer->next;
	pointer->list_pointerA->previous = bag_pointer;
	bag_pointer->next = pointer->list_pointerA;
	bag_pointer->previous = NULL;
	pointer->list_pointerA = bag_pointer;
	write(1, "sa\n", 3);
}

int	ft_max(t_one *pointer)
{
	int		max;
	t_list	*bag_pointer;

	bag_pointer = pointer->list_pointerA;
	max = bag_pointer->order;
	while (bag_pointer)
	{
		if (max < bag_pointer->order)
			max = bag_pointer->order;
		bag_pointer = bag_pointer->next;
	}
	return (max);
}

int	ft_min(t_one *pointer)
{
	int		min;
	t_list	*bag_pointer;

	bag_pointer = pointer->list_pointerA;
	min = bag_pointer->order;
	while (bag_pointer)
	{
		if (min > bag_pointer->order)
			min = bag_pointer->order;
		bag_pointer = bag_pointer->next;
	}
	return (min);
}
